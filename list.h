#ifndef LIST_H
#define LIST_H

class LinkedList {
  private:
    typedef struct node{
      int value;
      node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr currentNode;
    nodePtr temp;

  public:
    LinkedList();
    ~LinkedList();
    void insertNode(int);
    void printList();
};

#endif
