// Stephen Oium 
// Assignment 4 
// LinkList Arbitration Options 
// 2.8.2021 
// Main.cpp
#include <iostream>
#include "linkList.h"

using std::cout;
using std::cin;
using std::endl;

int main() { // main function 
    linkList<int> stephensList; //myList was bland so I created my own list. 
    stephensList.add(3, 0);
    stephensListadd(1, 0);
    stephensList.add(4, 2);
    stephensList.add(2, 1);
    cout << "Testing stephensList (get) function :" << endl;
    cout << stephensList.get(0) << endl;
    cout << stephensList.get(1) << endl;
    cout << stephensList.get(2) << endl;
    cout << stephensList.get(3) << endl;
    cout << stephensList.get(4) << endl;
    cout << "DELETE and GET testing :" << endl;
    cout << stephensList.get(0) << endl;
    cout << stephensList.remove(0) << endl;
    cout << stephensList.get(1) << endl;
    cout << stephensList.remove(1) << endl;
    cout << stephensList.get(20) << endl;
    cout << stephensList.remove(20) << endl;
    cout << stephensList.get(0) << endl;
    cout << stephensList.remove(0) << endl;
    cout << "ADD test: " << endl;
    cout << stephensList.add(0) << endl;
    cout << stephensList.add(1) << endl;
    cout << stephensList.add(2) << endl;
    cout << stephensList.add(3) << endl;
    cout << stephensList.add(4) << endl;
    cout << stephensList.add(5) << endl;
    cout << stephensList.add(6) << endl;
    cout << stephensList.add(7) << endl;

    // return 0 //  end main.cpp //
    return 0;
    