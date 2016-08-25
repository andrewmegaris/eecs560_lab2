#include <cstdlib>
#include <iostream>

#include "list.h"

using namespace std;

LinkedList::LinkedList(){
  head = NULL;
  currentNode = NULL;
  temp = NULL;
}

void LinkedList::insertNode(int insertValue){
  bool insert = true;
  nodePtr  newNode = new node;
  newNode -> next = NULL;
  newNode -> value = insertValue;

  //list already has atleast one node
  if(head != NULL){
    currentNode = head;
    //early check for single node list case
    if(newNode -> value == head -> value){insert = false;}
    //move to end of list
    while(currentNode -> next != NULL){
      //checking every extra node for uniqueness
      if(newNode -> value == currentNode -> value){insert = false;}
      currentNode = currentNode -> next;
    }
    //if newNode is still unique insert it.
    if(insert){ currentNode -> next = newNode;}
  }
  //if empty list insert this node as head.
  else{
    head = newNode;
  }
}

void LinkedList::printList(){
  currentNode = head;
  while(currentNode != NULL){
    cout << currentNode -> value << " ";
    currentNode = currentNode -> next;
  }
}

