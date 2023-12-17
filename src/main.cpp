#include "linked_list.h"

int main(int argc, char **argv)
{
    node x;
    linked_list s;

    s.add_value(0);
    s.add_value(1);
    s.add_value(2);
    s.add_value(3);
    s.add_value(4);
    s.add_value(5);
    s.add_value(6);
    s.add_value(7);
    s.add_value(8);
    s.add_value(9);
    std::cout << s.to_string() << std::endl;
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(-1);
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(10);
    s.remove_by_index(103304);
    std::cout << s.to_string() << std::endl;
    return 0;
}
