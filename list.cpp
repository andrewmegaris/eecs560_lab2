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

void LinkedList::reverse(){
  LinkedList  revList;
}

void LinkedList::concatenate(){
  if(currentNode//HERE WIP
}

void LinkedList::find(int findValue){}

void LinkedList::recurseToEnd(){
  //if the list is not empty
  if(currentNode != NULL){
    //move to end of list
    if(currentNode -> next != NULL){
      currentNode = currentNode -> next;
      //recursively call until currentNode is pointing at end of list.
      this.recursetoEnd();
    }
  }
}

void LinkedList::erase(int eraseValue){
  currentNode = head;
  //check for empty list
  if(currentNode != NULL){
    //continue checking the list
    while(currentNode -> next != NULL){
      if(currentNode -> value == eraseValue){
        //check for deletion of head node case
        if(head -> value == eraseValue){
          head = currentNode -> next;
          delete currentNode;
          currentNode = head;
        }
        else
          currentNode = currentNode -> next;
      }
    }
  }
}

