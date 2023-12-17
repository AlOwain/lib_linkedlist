#include "linked_list.h"
#include <string>

linked_list::linked_list()
{
    size = 0;
    head = new node;
}

void linked_list::add_value(int value)
{
    node *temp = head;
    while (temp->get_next() != nullptr)
        temp = temp->get_next();
    temp->set_value(value);
    temp->set_next(new node);
    size++;
}

short linked_list::remove_by_index(int index)
{
    // Can not delete an item with a larger index than the current size.
    if (size < index) { return 1; }

    // The last value in the list is always empty, therefore;
    // if head->get_next() does not exist, it means the list is empty.
    if (head->get_next() == nullptr) { return 2; }

    if (index == 0)
    {
        node *temp = head;
        head = head->get_next();
        delete temp;
        size--;
        return 0;
    }
    else
    {
        int i = 1;
        node *prev = head;
        node *curr = head->get_next();
        while (curr->get_next() != nullptr)
        {
            if (i == index)
            {
                prev->set_next(curr->get_next());
                delete curr;
                size--;
                return 0;
            }
            prev = curr;
            curr = curr->get_next();
            i++;
        }
    }
    
    // Catch all error.
    return 3;
}

std::string linked_list::to_string()
{
    node *temp = head;
    std::string list;
    while (temp->get_next() != nullptr)
    {
        list += std::to_string(temp->get_value());
        list += "->";
        temp = temp->get_next();
    }
    list += "\nSize: ";
    list += std::to_string(size);

    return list;
}
