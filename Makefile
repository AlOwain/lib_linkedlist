all: build build/debug
	echo "DEBUG VERSION"

release: clean build build/lib_linkedlist.a
	echo "LIB VERSION"

build/lib_linkedlist.a: src/node.h build/linkedlist.o
	ar rcs build/lib_linkedlist.a build/linkedlist.o

build/debug: build/debug.o src/node.h src/linkedlist.cpp
	g++ build/debug.o -o build/debug

build/debug.o: src/debug.cpp
	g++ -c src/debug.cpp -o build/debug.o

build:
	mkdir -p build

clean:
	rm -r build
