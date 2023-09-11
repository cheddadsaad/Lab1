
CXX = g++
CXXFLAGS = -pedantic -std=c++11 -Wall -Wextra
CFLAGS = -I./include
SRC = ./src
INC = ./include

.PHONY: all clean

all: main

main: main.o book.o
	$(CXX) $^ -o $@

main.o: $(SRC)/main.cpp $(INC)/Book.h
	$(CXX) $(CXXFLAGS) $(CFLAGS) -c $< -o $@

book.o: $(SRC)/book.cpp $(INC)/Book.h
	$(CXX) $(CXXFLAGS) $(CFLAGS) -c $< -o $@

clean:
	rm -f main *.o