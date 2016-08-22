#ifndef _NODE
#define _NODE

//global includes
#include <cstddef> // this is used only for null inclusion
//local includes
#include "node.cpp"

class node{
public:
    node *nextNode; //will contain address of the next node
    int value;  //contains the nodes value
    
    //de/constructors
    node();
    ~node();
};


#endif
