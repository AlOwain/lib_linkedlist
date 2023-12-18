all: build/linked_list

build/linked_list: build/main.o build/node.o build/linked_list.o
	g++ build/main.o build/node.o build/linked_list.o -o build/linked_list

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o
	
build/linked_list.o: src/linked_list.cpp
	g++ -c src/linked_list.cpp -o build/linked_list.o

build/node.o: src/node.cpp
	g++ -c src/node.cpp -o build/node.o

build:
	mkdir -p build

clean:
	rm -r build
