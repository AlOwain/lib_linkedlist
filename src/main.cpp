#include "linked_list.h"

int main(int argc, char **argv)
{
    node x;
    linked_list s;

    s.append_value(0);
    s.append_value(1);
    s.append_value(2);
    s.append_value(3);
    s.append_value(4);
    s.append_value(5);
    s.append_value(6);
    s.append_value(7);
    s.append_value(8);
    s.append_value(9);
    std::cout << s.to_string() << std::endl;
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(0);
    s.remove_by_index(0);
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
