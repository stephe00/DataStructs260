// Stephen Oium 
// Bag of Marbles 
// C++
// 2.2.2021

#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;

// integers for marbles and marble colors inside the bag

int red = 0;
int green = 0;
int blue = 0;
int maxMarbles = 100;
int nMarbles = 0;

// math.cpp in other words the amount of marbles and colors

void Stats() {
    nMarbles = red + green + blue;
}

// true or false? 

bool bagisFull(int addition = 0) {
    if (nMarbles + addition <= maxMarbles) {
        return false;
    }
    return true;
}

// adding marbles 

void addMarble(int nMarblesAdding = 0, char color = 'r') {
    switch(color) {
        case 'r':
            red += nMarblesAdding;
            break;
        case 'g':
            green += nMarblesAdding;
            break;
        case 'b':
            blue += nMarblesAdding;
            break;
    }
}

// user input 

void questionOne() {
    char decision = 'n';
    int nMarblesAdding = 0;
    char color = 'r';

    cout << "Would you like to add any marbles (y or n): ";
    cin >> decision;
    if (decision == 'y') {
        do {
            cout << "How many marbles: ";
            cin >> nMarblesAdding;
        } while (bagisFull(nMarblesAdding));
        cout << "Which color (r or g or b): "; // red, green or blue?
        cin >> color;
        addMarble(nMarblesAdding, color);
    }
    Stats();
}

// true or false 

bool canRemove(int nMarblesRemoving) {
    if (nMarbles - nMarblesRemoving < 0) {
        return false;
    }
    return true;
}

// subtracting marbles 

void removeMarbles(int nMarblesRemoving = 0) {
    int redRemoves = 0;
    int greenRemoves = 0;
    int blueRemoves = 0;
    srand(time(0));
    int initColor = rand() % 3;
    int remainingToRemove = nMarblesRemoving;

    if (red > 0) {
        minus = 
    }

    

    
}

// subtraction 

void minus() {
    char decision = 'n';
    int nMarblesRemoving = 0;

    cout << "Would you like to remove any marbles (y or n): ";
    cin >> decision;
    if (decision == 'y') {
        do {
            cout << "How many marbles: ";
            cin >> nMarblesRemoving;
        } while (canRemove(nMarblesRemoving));
        removeMarbles(nMarblesRemoving);
    }
}

// main ...
// begins with char @ loop of n 

int main(){
    char loop = 'n';
    cout << "\nThis marble bag can hold upwards of 100 marbles. Thanks for playing. \n";

    do {
        questionOne();
        minus();
        displayBag();
        cout << "Would you like to continue (y or n): ";
        cin >> loop;
    } while (loop == 'y');

    cout << "\n";
    return 0;
}
