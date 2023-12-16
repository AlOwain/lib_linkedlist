#include "node.h"

node::node() : node(0) {}
node::node(int value)
{
    next = nullptr;
    set_value(value);
}

void node::set_value(int value) { this->value = value; }
void node::create_next() { this->next = new node; }

int node::get_value() { return value; }
node* node::get_next() { return next; }
