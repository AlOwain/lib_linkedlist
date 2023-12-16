#include "node.h"

node::node() : node(0) {}

node::node(int value)
{
    set_next(nullptr);
    set_value(value);
}

void node::set_value(int value) { this->value = value; }
void node::set_next(node *next) { this->next = next; }

int node::get_value() { return value; }
node* node::get_next() { return next; }
