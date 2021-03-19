#include <cstdlib>
#include <iostream>
#include "ArrayList.h"

using std::cout;
using std::endl;


int main()
{
    ArrayList<int> myList;

    // populate list
    myList.addItem(1);
    myList.addItem(2);
    myList.addItem(3);
    myList.addItem(11);
    myList.addItem(4);
    myList.addItem(47);
    myList.addItem(13);
    myList.addItem(26);
    myList.printList();
    cout << "List populated with data..." << endl << endl;
    
    // delete data
    myList.deleteItem(9);
    myList.printList();
    cout << "Deleted item from list successfully!" << endl << endl;

    // add item back to list
    myList.addItem(8);
    myList.printList();
    cout << "Item added to list successfully!" << endl << endl;

    // add duplicate item to list
    myList.addItem(11);
    myList.printList();
    cout << "Duplicate item added to list successfully!" << endl << endl;

    // attempt to overfill list
    myList.addItem(62);
    myList.addItem(6);
    myList.printList();
    cout << "Attempt to overfill successfully!" << endl << endl;


    cout << "All tests passed!" << endl << endl;    

    return 0;
}
