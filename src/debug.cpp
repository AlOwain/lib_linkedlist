#include <iostream>
#include "../lib/linkedlist.h"

int main(int argc, char **argv)
{
    LinkedList<int> x;

    x.add_end(3);
    x.remove_end();
    x.add_start(4);
    x.remove_start();

    // x is empty
    x.add_start(7);
    x.add_start(283);
    x.add_end(3423);
    x.add_start(5);
    std::cout << "List size: " << x.size() << std::endl;
    std::cout << x << std::endl;
    x.remove_start();
    std::cout << x << std::endl;
    x.remove_end();
    std::cout << x << std::endl;
    x.remove_by_index(1);
    std::cout << x << std::endl;
    x.remove_by_index(0);

    // x is empty
    std::cout << "List size: " << x.size() << std::endl;

    std::cout << x << std::endl;
    x.add_value(1, 2131);
    std::cout << x << std::endl;
    x.add_value(6, 0);
    std::cout << x << std::endl;
    x.add_value(3298, 1);
    std::cout << x << std::endl;
    x.add_value(2981, -3);
    std::cout << x << std::endl;
    x.remove_by_index(x.search(3298));
    std::cout << x << std::endl;
    x.remove_by_index(10010);
    std::cout << x << std::endl;
    x.remove_by_index(-199);
    std::cout << x << std::endl;
    x.remove_by_index(1999);
    std::cout << x << std::endl;

    // x is empty
    x.add_start(0);
    x.remove_by_index(1);
    std::cout << x << std::endl;

    LinkedList<char> y;

    y.add_end('s');
    y.add_end('r');
    std::cout << y[0] << " | " << y[0].get_value() << std::endl;
    std::cout << y[1] << " | " << y[1].get_value() << std::endl;
    Node u('b');
    std::cout << u << " | " << u.get_value() << std::endl;

    x.add_end(1);
    x.add_end(8);
    LinkedList<LinkedList<int>> ll;
    ll.add_end(x);
    LinkedList<int> f;
    f.add_end(2);
    f.add_end(2);
    ll.add_end(f);

    std::cout << ll[0] << std::endl;
    std::cout << ll[1] << std::endl;

    std::cout << ll << std::endl;

    LinkedList<int> j;

    j.add_start(1);
    j.add_start(2);
    j.add_start(3);

    std::cout << j << std::endl;
    j.remove_start();
    j.remove_start();
    j.remove_start();
    std::cout << j << std::endl;

    return 0;
}
