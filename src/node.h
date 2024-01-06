#pragma once

template <typename T>
class Node {
public:
    Node() { next = nullptr; }
    Node(T value) { next = nullptr; set_value(value); }

    void set_value(T value) { this->value = value; }
    void set_next(Node<T> *item) { this->next = item; }

    T get_value() { return value; }
    Node* get_next() { return next; }
private:
    T value;
    Node *next;
};
