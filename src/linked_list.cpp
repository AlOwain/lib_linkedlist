#include "linked_list.h"

linked_list::linked_list() { head = new node; }

void linked_list::add_value(int value)
{
    node *temp = head;
    while (temp->get_next() != nullptr)
        temp = temp->get_next();
    temp->set_value(value);
    temp->create_next();
}

std::string linked_list::to_string()
{
    node *temp = head;
    std::string list;
    while (temp->get_next() != nullptr)
    {
        list += std::to_string(temp->get_value());
        list += " ";
        temp = temp->get_next();
    }

    return list;
}
