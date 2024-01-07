#pragma once
#include <ostream>

template <typename T>
class Node {
public:
    Node() { next = nullptr; }
    Node(T value) { next = nullptr; set_value(value); }

    void set_value(T value) { this->value = value; }
    void set_next(Node<T> *item) { this->next = item; }

    T get_value() { return value; }
    Node* get_next() { return next; }

    std::ostream& operator<<(std::ostream& stream) { stream << this->get_value(); return stream; }
private:
    T value;
    Node *next;
};
