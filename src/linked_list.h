#include <iostream>
#include "node.h"

class linked_list {
public:
    linked_list();
    

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
private:
    int size;
    node *head;

    // add_start(int value):
    //      parameters:
    //          - int:          It takes the value you want to add, and adds it to the start of the list.
    void add_start(int value);

    // add_end(int value):
    //      parameters:
    //          - int:          It takes the value you want to add, and adds it to the end of the list.
    void add_end(int value);
};
