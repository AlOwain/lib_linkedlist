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
    std::cout << "Index of 1: " << s.search(1) << std::endl;
    std::cout << "Index of 7: " << s.search(7) << std::endl;
    std::cout << "Index of 213834: " << s.search(213834) << std::endl;

    s.remove_by_index(0);
    std::cout << "After removing index[0]: ";
    std::cout << s.to_string() << std::endl;

    s.remove_by_index(3);
    std::cout << "After removing index[3]: ";
    std::cout << s.to_string() << std::endl;

    s.remove_by_index(5);
    std::cout << "After removing index[5]: ";
    std::cout << s.to_string() << std::endl;

    s.remove_by_value(6);
    std::cout << "After removing value 6: ";
    std::cout << s.to_string() << std::endl;

    s.remove_by_value(9);
    std::cout << "After removing value 9: ";
    std::cout << s.to_string() << std::endl;

    s.remove_by_value(3);
    std::cout << "After removing value 3: ";
    std::cout << s.to_string() << std::endl;

    return 0;
}
