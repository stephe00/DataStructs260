// only included once 
#pragma once
#include "node.h"
//Let's make an ascending ordered list

/* tests
add to an empty list
remove from an empty list
print an empty list
search in an empty list

add before head of list
add after head of list
add farther down the list (may be similar to previous test)

remove head
remove after head
remove non-existent value

print list of size 1
print list of size > 1 (may be similar to previous test)

search list of size 1
search list of size > 1 (may be similar to previous test)
search non-existant value (may be similar to searching an empty list?)

others?

*/


//operators 

class Auto_sorted_list {
//attributes I want to track:
private:
//head //points to first node in list
	Node *head;
//tail //points to last node in list
	Node *tail;
//length? //total number of nodes in the list... optional
	int length;
	
public:
//constructor
	Auto_sorted_list();

//add(value) 
	bool add(int new_value);
//remove(value) 
	int remove(int old_value);
//print() 
	void print();
//search(value) 
//search the list to see if the value is in it and return the position of that value if it exists.
	int search(int candidate_value);
	
	int get_length();
};

