// Stephen Oium 
// main.cpp
// driver file for the link queue 


#include <iostream>
#include "queue.h"

using std::cout;
using std::cin;
using std::endl;

int main() {     // Queue
    Queue<int> myQueue;

    char keepRunning = 'y';
    int input;
    char decision;

    while (keepRunning == 'y') {
        cout << "Would you like to add to the queue (y / n): "; // user input 
        cin >> decision;
        if (decision == 'y') {
            cout << "What value would you like to add to the queue: "; // user input 
            cin >> input;
            if (input != 'n')
                myQueue.enqueue(input); // ADD
        }
        cout << "Would you like to remove from the queue (y / n): "; // SUBTRACT 
        cin >> decision;
        if (decision == 'y')
            cout << myQueue.dequeue() << endl; // Remove 
        cout << "Would you like to continue (y / n): ";
        cin >> keepRunning;
    }

    return 0;
}
