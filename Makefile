output: main.o
	g++ main.o -o lab2

main.o: main.cpp
	g++ -c main.cpp


clean:
	rm *.o lab2
