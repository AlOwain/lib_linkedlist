#include <iostream>
#include "node.h"

int main(int argc, char **argv)
{
    node x;

    x.set_next(new node(1));
    x.get_next()->set_next(new node(2));
    std::cout << x.get_value() << " ";
    std::cout << x.get_next()->get_value() << " ";
    std::cout << x.get_next()->get_next()->get_value() << "\n";
    return 0;
}
