node::node(){
     nextNode = NULL;
     value    = NULL;
}
void node::setValue(int inputValue){
    value = inputValue;
}

void node::setNext(node* inputNextNode){
    nextNode = inputNextNode;
}

int getValue(){
return value;
}
