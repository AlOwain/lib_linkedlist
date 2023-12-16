#include <iostream>
#include "node.h"

class linked_list {
public:
    linked_list();
    
    void add_value(int value);
    std::string to_string();
private:
    node *head;
};
