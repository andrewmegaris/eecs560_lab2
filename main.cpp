#include <fstream>
#include <iostream>
#include "list.cpp"

int main(int argc, char** argv){

  LinkedList list;
  int userInput = 99;
  int input;
  std::ifstream inputFile("data.txt");

  while(inputFile >> input){
    list.insertNode(input);
  }

  while(userInput != 3){
    for(int n = 0; n < 20; n++){cout << "\n\n\n\n";}
    if(userInput == 2){
      cout << "Current List: ";
       list.printList();
      cout << endl;
    }

    cout << "*-------------------------*" << endl;
    cout << "- MENU                     " << endl;
    cout << "---------------------------" << endl;
    cout << "- Please Choose An Option -" << endl;
    cout << "---------------------------" << endl;
    cout << "- 1. Insert A New Value   -" << endl;
    cout << "-                         -" << endl;
    cout << "- 2. Print Current List   -" << endl;
    cout << "-                         -" << endl;
    cout << "- 3. Exit Program         -" << endl;
    cout << "*-------------------------*" << endl;
    cout << "* User Input: ";
    cin >>  userInput;
    if(userInput == 1){
       cout << "*-------------------------*" << endl;
       cout << "- Type Value To Input     -" << endl;
       cout << "- Input Value: ";
       cin >> userInput;
    }
  }
  return 0;
}
