#include <iostream>
#include "node.h"

class linked_list {
public:
    linked_list();
    
    // append_value(int value):
    //      parameters:
    //          - int:          It takes the value you want to append, and adds it to the end of the list.
    void append_value(int value);
    
    // to_string()
    //      returns:
    //          - std::string:  It returns a string of the values seperate by a whitespace (" ").
    std::string to_string();

    // remove_by_index:
    //      parameters:
    //          - int:          Index of the item you want to remove (starts from 0).
    //      returns:
    //          - 0:            On success.
    //          - !0:           Error code.
    short remove_by_index(int index);

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
};
