#include <fstream>
#include <iostream>
#include "list.cpp"

int main(int argc, char** argv){

  LinkedList list;
  LinkedList listTwo;
  bool initialLoad = true;
  int userInput = 99;
  int input;
  std::ifstream inputFile("data.txt");
  std::ifstream inputFile2("data2.txt");

  //build list 1
  while(inputFile >> input){
    list.insertNode(input);
  }
  
  //build list 2
  while(inputFile2 >> input){
    listTwo.insertNode(input);
  }

  while(userInput != 6){
   // for(int n = 0; n < 20; n++){cout << "\n\n\n\n";}
    //Display lists on first load.
    if(initialLoad){
      cout << "data.txt elements : ";
      list.printList();
      cout << endl;
      cout << "data2.txt elements : ";
      listTwo.printList();
      cout << endl;
      initialLoad = false;
    }


    //Print List Function
    if(userInput == 5){
      cout << "Current List: ";
       list.printList();
      cout << endl;
    }
    //Reverse List Function
    else if(userInput == 3){
      list.reverse(list.head);
    }
    //Insert Value Function
    else if(userInput == 1){
       cout << "*-------------------------*" << endl;
       cout << "- Type Value To Input     -" << endl;
       cout << "- Input Value: ";
       cin >> input;
       list.insertNode(input);
    }
    //Delete Value Function
    else if(userInput == 2){
      cout << "*-------------------------*" << endl;
      cout << "- Type Value To Remove    -" << endl;
      cout << "- Remove Value: ";
      cin >> input;
      list.erase(input); 
    }
    //Concatante Lists Function
    else if(userInput == 4){
      list.concatenate(listTwo);
    }

    cout << "*-------------------------*" << endl;
    cout << "- MENU                     " << endl;
    cout << "---------------------------" << endl;
    cout << "- Please Choose An Option -" << endl;
    cout << "---------------------------" << endl;
    cout << "- 1. Insert A New Value   -" << endl;
    cout << "-                         -" << endl;
    cout << "- 2. Delete A Value       -" << endl;
    cout << "-                         -" << endl;
    cout << "- 3. Reverse Current List -" << endl;
    cout << "-                         -" << endl;
    cout << "- 4. Concatenate Lists    -" << endl;
    cout << "-                         -" << endl;
    cout << "- 5. Print Current List   -" << endl;
    cout << "-                         -" << endl;
    cout << "- 6. Exit Program         -" << endl;
    cout << "*-------------------------*" << endl;
    cout << "* User Input: ";
    cin >>  userInput;

    }
  
  return 0;
}
