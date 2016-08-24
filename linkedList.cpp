/*///////////////////////////////////////////////////////////////////////
//--linkedList.cpp
//-- eecs560_lab1
//--Andrew Megaris
//////////////////////////////////////////////////////////////////////*/

//Global Includes
#include <iostream>

//Local Includes
#include "linkedList.h"

//Linked List Constructor Description
/*LinkedList::LinkedList(){
    Node head;//= new Node();
    //headPtr -> nodePtr = NULL;
}*/
//End Linked List Constructor Description

//Linked List Deconstructor Description
LinkedList::~LinkedList()
{
    //TODO
}
//End Linked List Constructor Description

//Print Function Description
void LinkedList::print(){
    traverseList(true,false,0);
}
//End Print Function Description

//Insert Function Description
void LinkedList::insert(int insertValue){
    traverseList(false,true,insertValue);
}
//End Insert Function Description

//Is Empty Function Description
bool LinkedList::isEmpty()
{
    return(headPtr == NULL);
}
//End Is Empty Function Description

//Traverse List Function Description
void LinkedList::traverseList(bool print,bool insert,int insertValue){
    //set temp pointer to start of list
    Node *temp;
    temp = headPtr;
    //Empty list case
    if(isEmpty())
    {   //Empty and Print case
        if(print)
        {
            std::cout << "Empty List";
        }
       //Empty and Insert case
        if(insert)
        {
            headPtr = new Node;
            headPtr -> value = insertValue;
        }
    }
    else
    {
        //begin moving to end of list.
        while(temp -> nodePtr != NULL){
            if(insert){
                //check for duplicate value for insert
                if(insertValue == temp -> value){
                    insert = false;
                }
            }

            //print value if needed to
            if(print){
                std::cout << temp -> value << " ";
            }
            //advance tracer pointer
            temp = temp -> nodePtr;
        }

        //if insertValue is still true, insert at end of list.
        if(insert)
        {
            Node newNode;
            newNode.value = insertValue;
            newNode.nodePtr = NULL;
            temp -> nodePtr = &newNode;
        }
    }
}
//End Traverse List Function Description

