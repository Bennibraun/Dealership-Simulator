main: driver.cpp
	g++ -Wall -o main driver.cpp dealership.cpp vehicle.cpp car.cpp truck.cpp

run: main
	./main dealer.txt

clean:
	rm main
