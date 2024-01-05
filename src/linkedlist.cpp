#include "linkedlist.h"

LinkedList::LinkedList() { size = 0; head = nullptr; }

void LinkedList::add_to_empty(int value)
{
    head = new Node(value);
    size++;
}

void LinkedList::add_start(int value)
{
    if (size == 0) return add_to_empty(value);

    Node *second_item = head->get_next();
    head->set_next(new Node(head->get_value()));
    head->set_value(value);
    head->get_next()->set_next(second_item);
    size++;
}

void LinkedList::add_end(int value)
{
    if (size == 0) return add_to_empty(value);

    Node *prev = head;
    while (prev->get_next() != nullptr)
        prev = prev->get_next();
    prev->set_next(new Node(value));

    size++;
}

void LinkedList::add_value(int value, int index)
{
    if (size == 0) return add_to_empty(value);
    if (index <= 0) return add_start(value);
    if (index >= size) return add_end(value);

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
    if (size == 0) return -1;
    if (size == 1) return remove_start();

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
    if (size <= 0) return -2;

    if (index <= 0) return remove_start();
    if (index >= size - 1) return remove_end();

    int iterator = 1;
    Node *prev = head;
    Node *curr = head->get_next();
    while (curr->get_next() != nullptr && iterator != index)
    {
        prev = curr;
        curr = curr->get_next();
        iterator++;
    }

    prev->set_next(curr->get_next());
    delete curr;
    size--;
    return 0;
}

short LinkedList::remove_by_value(int value) { return remove_by_index(search(value)); }

std::string LinkedList::to_string()
{
    if (size == 0) return "";

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
