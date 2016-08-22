/////////////////////////////////////////////////////////////////////////
// linkedList.h
// eecs560_lab1
// Andrew Megaris
/////////////////////////////////////////////////////////////////////////
#ifndef _LINKEDLIST
#define _LINKEDLIST


//local include
#include "linkedList.cpp"

public:
    linkedList();
    ~linkedList();
    
    void print();
    void insert(x);
private:
    node* list;
    node* newNode();
    node* checkList(int);
    
#endif
