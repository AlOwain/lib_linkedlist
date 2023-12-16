

class node {
public:
    node();
    node(int value);

    void set_value(int value);
    void set_next(node* next);

    int get_value();
    node* get_next();
private:
    int value;
    node *next;
};
