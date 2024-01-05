#include "linkedlist.h"

LinkedList::LinkedList() { m_size = 0; head = nullptr; }

void LinkedList::add_to_empty(int value)
{
    head = new Node(value);
    m_size++;
}

void LinkedList::add_start(int value)
{
    if (m_size == 0) return add_to_empty(value);

    Node *second_item = head->get_next();
    head->set_next(new Node(head->get_value()));
    head->set_value(value);
    head->get_next()->set_next(second_item);
    m_size++;
}

void LinkedList::add_end(int value)
{
    if (m_size == 0) return add_to_empty(value);

    Node *prev = head;
    while (prev->get_next() != nullptr)
        prev = prev->get_next();
    prev->set_next(new Node(value));

    m_size++;
}

void LinkedList::add_value(int value, int index)
{
    if (m_size == 0) return add_to_empty(value);
    if (index <= 0) return add_start(value);
    if (index >= m_size) return add_end(value);

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
    m_size++;
}

int LinkedList::search(int value)
{
    if (m_size <= 0) return -1;

    Node *trav = head;
    for (int index = 0; index < m_size; index++)
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
    m_size--;
    return 0;
}

short LinkedList::remove_end()
{
    if (m_size == 0) return -1;
    if (m_size == 1) return remove_start();

    Node *curr = head;
    while (curr->get_next()->get_next() != nullptr)
        curr = curr->get_next();
    delete curr->get_next();
    curr->set_next(nullptr);
    m_size--;
    return 0;
}

short LinkedList::remove_by_index(int index)
{
    if (m_size <= 0) return -2;

    if (index <= 0) return remove_start();
    if (index >= m_size - 1) return remove_end();

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
    m_size--;
    return 0;
}

short LinkedList::remove_by_value(int value) { return remove_by_index(search(value)); }

int LinkedList::size() { return m_size; }

std::string LinkedList::to_string()
{
    if (m_size == 0) return "";

    Node *trav = head;
    std::string list;

    while (trav->get_next() != nullptr)
    {
        list += std::to_string(trav->get_value());
        list += ", ";
        trav = trav->get_next();
    }

    list += std::to_string(trav->get_value());

    return list;
}
