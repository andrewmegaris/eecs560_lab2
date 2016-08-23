/////////////////////////////////////////////////////////////////////////
// linkedList.h
// eecs560_lab1
// Andrew Megaris
/////////////////////////////////////////////////////////////////////////
#ifndef _LINKEDLIST
#define _LINKEDLIST


//local include
#include "linkedList.cpp"
#include "node.h"
class linkedList{
public:
    linkedList();
    ~linkedList();

    void print();
    void insert(int);

private:
    node* headNode;
};
#endif
