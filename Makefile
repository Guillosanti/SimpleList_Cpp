Program: main.o list.o
	g++ main.o list.o -o Create_a_list

main.o: main.cpp
	g++ -c main.cpp

list.o: list.cpp
	g++ -c list.cpp

clean:
	rm *.o