all: main

main: main.o report.o -o main

lmain.o: main.cpp
	g++ -c main.cpp

report.o: report.cpp 
	g++ -c report.cpp 
      
clean :        
	rm -f main
