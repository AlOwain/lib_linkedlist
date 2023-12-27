all: build build/lib_linkedlist.a

build/lib_linkedlist.a: build/node.o build/linkedlist.o
	ar rcs build/lib_linkedlist.a build/node.o build/linkedlist.o

build/node.o: src/node.cpp
	g++ -c src/node.cpp -o build/node.o

build/linkedlist.o: src/linkedlist.cpp
	g++ -c src/linkedlist.cpp -o build/linkedlist.o

build:
	mkdir -p build

clean:
	rm -r build
