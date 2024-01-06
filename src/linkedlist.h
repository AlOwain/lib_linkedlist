#pragma once
#include <iostream>
#include <string>
#include "node.h"

class LinkedList {
public:
    LinkedList();

    // add_value(int value, int index):
    //      parameters:
    //          - int:          It takes the value you want to add, and adds it at the given index.
    //          - int:          It takes the placement of the value you want to add (the index).
    void add_value(int value, int index);
    
    // to_string()
    //      returns:
    //          - std::string:  It returns a string of the values seperate by a whitespace (" ").
    std::string to_string();

    // remove_by_index(int index):
    //      parameters:
    //          - int:          Index of the item you want to remove (starts from 0).
    //      returns:
    //          - 0:            On success.
    //          - !0:           Error code.
    short remove_by_index(int index);

    // remove_by_value(int value):
    //      parameters:
    //          - int:          Value of the item you want to remove.
    //      returns:
    //          - 0:            On success.
    //          - !0:           Error code.
    short remove_by_value(int value);

    // search(int value):
    //      parameters:
    //          - int:          The value you want to search for.
    //      returns:
    //          - <0:           On success, it returns the index to the item.
    //          - >0:           On failure, it returns the error code.
    int search(int value);

    // add_start(int value):
    //      parameters:
    //          - int:            It takes the value you want to add, and adds it to the start of the list.
    void add_start(int value);

    // add_end(int value):
    //      parameters:
    //          - int:            It takes the value you want to add, and adds it to the end of the list.
    void add_end(int value);

    // remove_start():
    //      returns:
    //          - 0:            On success.
    //          - <0:           On failure, it returns the error code.
    short remove_start();

    // remove_end():
    //      returns:
    //          - 0:            On success.
    //          - <0:           On failure, it returns the error code.
    short remove_end();

    // size():
    //      returns:
    //          - int:          Size of the list.
    int size();
private:
    int m_size;
    Node<int> *head;

    void add_to_empty(int value);
};
