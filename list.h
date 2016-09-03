#ifndef LIST_H
#define LIST_H

class LinkedList {
  public:
    typedef struct node{
      int value;
      node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr currentNode;
    nodePtr temp;

    LinkedList();
    ~LinkedList();
    void insertNode(int);
    void reverse(nodePtr);
    void erase(int);
    void printList();
    void concatenate(nodePtr);

};

#endif
