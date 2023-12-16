all: build/main

build/main: build/main.o
	g++ build/main.o -o build/test

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o
	
build:
	mkdir -p build

clean:
	rm -r build
