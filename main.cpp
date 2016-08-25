#include <fstream>
#include <iostream>
#include "list.cpp"

int main(int argc, char** argv){

  LinkedList list;
  bool quit = false;
  bool printList = false;
  int userInput;
  int input;
  std::ifstream inputFile("data.txt");

  while(inputFile >> input){
    list.insertNode(input);
  }

  while(!quit){
    for(int n = 0; n < 20; n++){cout << "\n\n\n\n";}
    if(printList){}
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
    cin >>  userInput;
    if( userInput == 3 )
      quit = true;
  }
  return 0;
}
