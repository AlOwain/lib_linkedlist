#include "linkedlist.h"

LinkedList::LinkedList() { size = 0; head = nullptr; }

// FIXME: is the last value at size or size + 1?
void LinkedList::add_start(int value)
{
    if (size == 0) { head = new Node(value); return; }
    Node *second_item = head->get_next();
    head->set_next(new Node(head->get_value()));
    head->set_value(value);
    head->get_next()->set_next(second_item);
}

void LinkedList::add_end(int value)
{
    Node *prev = head;
    while (prev->get_next() != nullptr)
        prev = prev->get_next();
    prev->set_next(new Node(value));
}

void LinkedList::add_value(int value, int index)
{
    if (index <= 0 || size == 0) add_start(value);
    else if (index >= size) add_end(value);
    else {
        int iterator = 0;
        Node *prev = head, *curr = head;
        while (curr->get_next() != nullptr && iterator != index)
        {
            prev = curr;
            curr = curr->get_next();
            iterator++;
        }
        prev->set_next(new Node(value));
        prev->get_next()->set_next(curr);
    }
    size++;
}

int LinkedList::search(int value)
{
    if (size <= 0) return -1;

    Node *trav = head;
    for (int index = 0; index < size; index++)
    {
        if (trav->get_value() == value) return index;
        trav = trav->get_next();
    }
    return -2;
}

short LinkedList::remove_start()
{
    Node *temp = head;
    head = head->get_next();
    delete temp;
    size--;
    return 0;
}

short LinkedList::remove_end()
{
    Node *curr = head;
    while (curr->get_next()->get_next() != nullptr)
        curr = curr->get_next();
    delete curr->get_next();
    curr->set_next(nullptr);
    size--;
    return 0;
}

short LinkedList::remove_by_index(int index)
{
    // Can not delete an item with a larger index than the current size.
    if (size < index) return -1;
    if (size <= 0) return -2;

    if (index == 0) return remove_start();
    else if (index == size - 1) return remove_end();
    else
    {
        int i = 1;
        Node *prev = head;
        Node *curr = head->get_next();
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
    
    return -3;
}

short LinkedList::remove_by_value(int value) { return remove_by_index(search(value)); }

std::string LinkedList::to_string()
{
    Node *trav = head;
    std::string list;

    while (trav->get_next() != nullptr)
    {
        list += std::to_string(trav->get_value());
        list += "->";
        trav = trav->get_next();
    }

    list += std::to_string(trav->get_value());
    list += "\nSize: ";
    list += std::to_string(size);

    return list;
}