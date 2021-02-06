// stephen oium
// auto sorter 

#include <iostream>

#include "auto_sorted_list.h"

using std::cout;
using std::endl;

// constructor to build the list 
Auto_sorted_list::Auto_sorted_list() {
	head = nullptr;
	tail = nullptr;
	length = 0;
}

//add(value) 
//add the new value into the appropraite location in the list, return whether the operation succeeded.
bool Auto_sorted_list::add(int new_value) {
	Node *new_node = new Node(new_value, nullptr, nullptr);
	
	head = tail = new_node;
	
	length++;
	
	return true;
}
//remove(value) 
//
int remove(int old_value) {
	return -1;
}
//print() 
void Auto_sorted_list::print() {
	Node *current = head;
	while(current != nullptr) {
		cout << current->get_value() << ", ";
		current = current->get_next();
	}
	cout << endl;
}
//search(value) 
int search(int candidate_value) {
	return -1;
}

int Auto_sorted_list::get_length() {
	return length;
}
