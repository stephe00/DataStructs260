// Stephen Oium 
// Assignment 2 "Queue Data Structure" 
// January 17th, 2021
// Winter 2021

What functions are we likely to need for a queue to function like the one discussed in class?

boolisFull(){
if(front == 0 && rear == MAX_SIZE - 1){
return true;
        }
return false;
    }

boolisEmpty(){
if(front == -1) return true;
else return false;
    }

What values will we need to know about the structure for our queue to function properly?
 
true and false aka Bools 

The front and the rear. (1) and (-1)

// Linked list nodes 

class Node{ 
public: 
    int data; 
    Node* next; 
}; 

// ADD

void push(Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node(); 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 

// DELETE

void deleteNode(Node** head_ref, int key) 
{ 
      
    // Store head node 
    Node* temp = *head_ref; 
    Node* prev = NULL; 
      
