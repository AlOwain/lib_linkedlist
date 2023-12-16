#include "linked_list.h"

int main(int argc, char **argv)
{
    node x;
    linked_list s;

    s.add_value(1);
    s.add_value(2);
    s.add_value(3);
    s.add_value(4);
    s.add_value(5);
    std::cout << s.to_string() << std::endl;
    return 0;
}
