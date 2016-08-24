/*///////////////////////////////////////////////////////////////////////
//--linkedList.h
//-- eecs560_lab1
//--Andrew Megaris
//////////////////////////////////////////////////////////////////////*/

#ifndef _LINKEDLIST
#define _LINKEDLIST


//local include
//#include "linkedList.cpp"

//Node Structure Definition
struct Node{
    int value;
    Node *nodePtr;
};

//Linked List Class Definition
class LinkedList{
public:
    //Constructor and Deconstructor
    LinkedList();
    ~LinkedList();
    //Pointer for start of list
    Node *headPtr = NULL;

    //Linked List Function Definitions
    void print();
    void insert(int);
    bool isEmpty();
    void traverseList(bool,bool,int);
};

#endif
