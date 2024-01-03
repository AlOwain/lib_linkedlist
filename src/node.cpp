#include "node.h"

Node::Node() : Node(0) {}

Node::Node(int value)
{
    next = nullptr;
    set_value(value);
}

void Node::set_value(int value) { this->value = value; }
void Node::set_next(Node *item) { this->next = item; }

int Node::get_value() { return value; }
Node* Node::get_next() { return next; }
