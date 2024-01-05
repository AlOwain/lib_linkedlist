#pragma once

class Node {
public:
    Node();
    Node(int value);

    void set_value(int value);
    void set_next(Node *item);

    int get_value();
    Node* get_next();
private:
    int value;
    Node *next;
};
