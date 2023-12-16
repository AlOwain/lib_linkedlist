all: build/main

build/main: build/main.o build/node.o
	g++ build/main.o build/node.o -o build/linked-list

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o
	
build/node.o: src/node.cpp
	g++ -c src/node.cpp -o build/node.o

build:
	mkdir -p build

clean:
	rm -r build
