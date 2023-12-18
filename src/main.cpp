#include "linked_list.h"

int main(int argc, char **argv)
{
    node x;
    linked_list s;

    s.add_value(1, 0);
    s.add_value(2, -1);
    s.add_value(3, 40);
    s.add_value(4, 2);
    s.add_value(5, 0);
    s.add_value(6, 1);
    s.add_value(7, 10000000);
    s.add_value(9, 3);
    std::cout << s.to_string() << std::endl;
    return 0;
}
