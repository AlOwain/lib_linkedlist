#include "linked_list.h"
#include <string>

linked_list::linked_list()
{
    size = 0;
    head = new node;
}

void linked_list::append_value(int value)
{
    node *temp = head;
    while (temp->get_next() != nullptr)
        temp = temp->get_next();
    temp->set_value(value);
    temp->set_next(new node);
    size++;
}

int linked_list::search(int value)
{
    node *trav = head;
    int index = 0;
    while (trav->get_next() != nullptr)
    {
        if (trav->get_value() == value) return index;
        index++;
        trav = trav->get_next();
    }
    return -1;
}

short linked_list::remove_by_index(int index)
{
    // Can not delete an item with a larger index than the current size.
    if (size < index) { return -1; }

    // The last value in the list is always empty, therefore;
    // if head->get_next() does not exist, it means the list is empty.
    if (head->get_next() == nullptr) { return -2; }

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
    return -3;
}

short linked_list::remove_by_value(int value)
{
    return remove_by_index(search(value));
}

std::string linked_list::to_string()
{
    if (head->get_next() == nullptr) return "Empty list";
    node *trav = head;
    std::string list;
    while (1)
    {
        list += std::to_string(trav->get_value());
        if (trav->get_next()->get_next() == nullptr) break;
        list += "->";
        trav = trav->get_next();
    }
    list += "\nSize: ";
    list += std::to_string(size);

    return list;
}
