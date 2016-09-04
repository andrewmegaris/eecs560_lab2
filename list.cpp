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

void LinkedList::reverse(nodePtr p){
  if(p -> next == NULL){
    head = p;
    return;
  }
  reverse(p -> next);
  nodePtr q = p -> next;
  q -> next = p;
  p -> next = NULL;
}

void LinkedList::concatenate(LinkedList &listTwo){
  currentNode = head;
  //move to end of list.
  while(currentNode -> next != NULL){
    currentNode = currentNode -> next;
  }
  if(listTwo.head -> next != NULL){
    currentNode -> next = listTwo.head;
    listTwo.head = listTwo.head -> next;
    currentNode -> next -> next = NULL;
    concatenate(listTwo);
  }
  else if(listTwo.head != NULL){
    currentNode -> next = listTwo.head;
    listTwo.head = NULL;
    return;
  }
  
}

void LinkedList::erase(int eraseValue){
  bool foundFlag = false;
  currentNode = head;
  temp = head;
  while(currentNode != NULL){
    if(currentNode -> value == eraseValue){
      //check for deletion of head node case
      if(head -> value == eraseValue){
        head = currentNode -> next;
        delete currentNode;
        currentNode = head;
        temp = currentNode;
        foundFlag = true;
      }
      //none head node case
      else{
        temp -> next = currentNode -> next;
        delete(currentNode);
        currentNode = temp -> next;
        foundFlag = true;
      }
    }
    //progress flag 
    else{
      temp = currentNode;
      currentNode = currentNode -> next;
    }
  }
 if(!foundFlag)
  cout << "Value " << eraseValue << " Not Found" << endl;
}


