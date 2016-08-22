//node element
struct node {
	int value;
	node *next;
};

//main
int main(){
	node *root;
	node *nextNode;
	
	root = new node;
	root -> next = 0;
	root -> value = 1;

}

//print function.
void print(){
	nextNode =  root;//Set nextNode to top of list.
	//check for empty list
	if (nextNode != 0){
		while (nextNode -> next != 0)
			std::cout << nextNode-> value; //output current value
			nextNode = nextNode -> next;	 //move to next node
	}
}

//checks if input value is currently in list.
//if not inserts value to the end of the list.  
void insert(x){
	//reset nextNode 
	nextNode = root;
	
	//check for empty list and move to the end.
	if( nextNode != 0 ){
		while(nextNode -> next != 0){
		nextNode = nextNode -> next;	
		}
	}
	nextNode -> next = new node; //add a new node at the end of the list
	nextNode = nextNode -> next; //advance to new last node
	nextNode -> next = 0; //cap new last node
	nextNode -> value = x; //assign new input value
	
}