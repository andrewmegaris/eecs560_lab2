#ifndef LIST_H
#define LIST_H

class LinkedList {
  private:
    typedef struct node{
      int value;
      node* next;
      node* prev;
    }* nodePtr;

    nodePtr head;
    nodePtr currentNode;
    nodePtr temp;

  public:
    LinkedList();
    ~LinkedList();
    void insertNode(int);
    void reverse();
    void erase(int);
    void find(int);
    void printList();

  private:
    void recurseToEnd();
};

#endif
