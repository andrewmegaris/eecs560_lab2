#include <fstream>
#include <string>
#include "linkedList.cpp"

//main
int main(int argc, char* argv[]){
    LinkedList *list;
 //   list = new LinkedList();

    //print empty list test
    list -> print();

    list -> insert(10);
    list -> print();

    list -> insert(20);
    list -> print();
    return 0;
}
