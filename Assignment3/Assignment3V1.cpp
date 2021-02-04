//Assignment3v1.cpp

// Stephen Oium 
// 1.23.2021
// CS 260 
// Link Queue 

// Based on what we know about linked lists, 
// stacks, and queues, design a linked queue 
//(a queue using a linked-list to store the data 
//in the structure)

//Design, implement, and test a Queue data structure that:

//uses a linked-list to store values in the queue

//has an enqueue method that will appropriately add a value to the back of the queue as an appropriate element

//has a dequeue method that will appropriately remove an element from the front of the queue and return its value

//Optionally has a peek method that returns the value at the front of the queue without removing it 
//Bonus if you also create an array based Queue!

//we had not covered this yet at the time 
//that this assignment was assigned, 
//you do not have to analyze your work this week) 
//Analyze the complexity of your implementations 
//(at least the run-time of the add, remove, and peek methods).
//Tests: Be sure to include at least one test for each piece of functionality that should verify that your code is working!
//Be sure to commit changes regularly to your git repo
//Remember to submit a link to this project in Moodle to remind us to grade it!

// Desiging the Queue. 

//In order to design the link-list queue I need to include: 

// Add (Enqueue) + to back as element 

// Remove (Dequeue) remove element from FRONT and return the value (number)

// Peek ? 


#include <iostream>

#include "queue.h"

#include "node.h"

using std::cout;
using std::cin;
using std::endl;

template < typename T >
  struct node {
    T val;
    node * next;
  };

template < class T > // add a template 
  class Queue { // using nodes and classes 

    private:
      node < T > * front;
    node < T > * back;

    public:
      Queue() {
        front = NULL;
        back = NULL;
      }

    //add one to the que 
    void enqueue(T newVal) { // new value 
      if (back != NULL) { // if null 
        node < T > * oldBack = back; // old back 
        back = new node < T > ; // new node 
        back -> val = newVal; // new int or value 
        back -> next = NULL;
        oldBack -> next = back;
      } else {
        back = new node < T > ;
        front = back;
        back -> val = newVal;
        back -> next = NULL;
      }
    }

    // minus one or deque
    T dequeue() {
      T returnVal = -1;
      if (front != NULL) {
        returnVal = front -> val;
        if (front -> next != NULL) {
          front = front -> next;
        } else {
          front = NULL;
          back = NULL;
        }
      }
      return returnVal;
    }

    // Test, test, test for the code 
    void displayQ() {
      if (front != NULL) {
        cout << "Printing queue..." << endl;
        node < T > * current = front;
        cout << current -> val << endl;
        while (current -> next != NULL) {
          current = current -> next;
          cout << current -> val << endl;
        }
      }
    }

