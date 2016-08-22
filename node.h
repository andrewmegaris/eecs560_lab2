#ifndef _NODE
#define _NODE

//global includes
#include <cstddef> // this is used only for null inclusion
//local includes
#include "node.cpp"

class node{
public:
    node();
    ~node();
    void setValue(int);
    void setNext(node* nextNode);
    int getValue();
private:
    node* next;
    int value;
};


#endif
