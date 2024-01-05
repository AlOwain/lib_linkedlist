all: build build/debug
	echo "DEBUG VERSION"

release: clean build build/lib_linkedlist.a
	echo "LIB VERSION"

build/lib_linkedlist.a: build/node.o build/linkedlist.o
	ar rcs build/lib_linkedlist.a build/node.o build/linkedlist.o

build/debug: build/debug.o build/node.o build/linkedlist.o
	g++ build/debug.o build/node.o build/linkedlist.o -o build/debug

build/debug.o: src/debug.cpp
	g++ -c src/debug.cpp -o build/debug.o

build/node.o: src/node.cpp
	g++ -c src/node.cpp -o build/node.o

build/linkedlist.o: src/linkedlist.cpp
	g++ -c src/linkedlist.cpp -o build/linkedlist.o

build:
	mkdir -p build

clean:
	rm -r build
