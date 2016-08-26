#include <iostream>
#include "list.h"

using namespace std;

LinkedList::LinkedList(){
  head = NULL;
  currentNode = NULL;
  temp = NULL;
}

LinkedList::~LinkedList(){
  currentNode = head;

  while (currentNode != NULL){
    temp = currentNode -> next;
    delete currentNode;
    currentNode = temp;
  }
}

void LinkedList::insertNode(int insertValue){
  bool insert = true;
  nodePtr  newNode = new node;
  newNode -> next = NULL;
  newNode -> value = insertValue;

  //list already has atleast one node
  if(head != NULL){
    currentNode = head;
    //move to end of list
    while(currentNode -> next != NULL){
      //checking every extra node for uniqueness
      if(newNode -> value == currentNode -> value){
        insert = false;
      }
      currentNode = currentNode -> next;
    }
    //check if last node value equals insert node value
    if(newNode -> value == currentNode -> value){
      insert = false;
    }
    //if newNode is still unique insert it.
    if(insert){
      currentNode -> next = newNode;
      cout << "success" << endl ;
    }
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

