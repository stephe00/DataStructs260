// main.cpp

// driver file 

// stephen oium 

// five.cpp 

// the list: 

// add, remove, search 

#include <iostream>
#include <string>

#include "node.h"
#include "auto_sorted_list.h"

using std::cout; // print method 
using std::endl; // end line 
using std::string; // strings 

void print_message(string message); // print message 

//main for auto-sorting 
int main() {
	print_message("Creating new auto sorted list asl.");
	Auto_sorted_list asl;
	print_message("asl.get_length(): " + std::to_string(asl.get_length()));
	print_message("");
	
	print_message("adding value 10 to list asl");
	asl.add(10);
	print_message("asl.get_length(): " + std::to_string(asl.get_length()));
	asl.print();
	
	return 0;