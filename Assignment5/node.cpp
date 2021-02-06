// Stephen Oium 
// Assignment 5 
// node.cpp 
// add node.h 


#include "node.h"


// create a node 
Node::Node() {
	value = 0;
	next = nullptr;
	prev = nullptr;
}
// node 
Node::Node(int new_value, Node *new_next, Node *new_prev) {
	value = new_value;
	next = new_next;
	prev = new_prev;
}

// get the value and return it 
int Node::get_value() {return value;}
void Node::set_value(int new_value) {value = new_value;}

// return the next value 
Node *Node::get_next() {return next;}
void Node::set_next(Node *new_next) {next = new_next;}

// return previous values 


Node *Node::get_prev() {return prev;}		
void Node::set_prev(Node *new_prev) {prev = new_prev;}

// Nodes 
