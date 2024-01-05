#include "linkedlist.h"
#include "node.h"

int main(int argc, char **argv)
{
    LinkedList x;

    x.add_end(3);
    x.remove_end();
    x.add_start(4);
    x.remove_start();

    // x is empty
    x.add_start(7);
    x.add_start(283);
    x.add_end(3423);
    x.add_start(5);
    std::cout << x.to_string() << std::endl;
    x.remove_start();
    std::cout << x.to_string() << std::endl;
    x.remove_end();
    std::cout << x.to_string() << std::endl;
    x.remove_by_index(1);
    std::cout << x.to_string() << std::endl;
    x.remove_by_index(0);

    // x is empty
    std::cout << x.to_string() << std::endl;
    x.add_value(1, 2131);
    std::cout << x.to_string() << std::endl;
    x.add_value(6, 0);
    std::cout << x.to_string() << std::endl;
    x.add_value(3298, 1);
    std::cout << x.to_string() << std::endl;
    x.add_value(2981, -3);
    std::cout << x.to_string() << std::endl;
    x.remove_by_index(x.search(3298));
    std::cout << x.to_string() << std::endl;
    x.remove_by_index(10010);
    std::cout << x.to_string() << std::endl;
    x.remove_by_index(-199);
    std::cout << x.to_string() << std::endl;
    x.remove_by_index(1999);
    std::cout << x.to_string() << std::endl;
    
    // x is empty
    x.add_start(0);
    x.remove_by_index(1);
    std::cout << x.to_string() << std::endl;

    return 0;
}
