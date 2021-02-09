// Stephen Oium 
// Assignment 4 
// LinkList Arbitration Options 
// 2.8.2021 
#include"node.h"
#include <iostream>
// 


using std::cout;
using std::cin;
using std::endl;



            node<T>* currentNode = front; // node to frunt 
            T bad = 0;
            //
            if (currentNode != NULL) {
                //For loop is O(n)
                for (int i = 0; i < index; i++) {
                    //
                    if (currentNode->next != NULL)
                        currentNode = currentNode->next;
                    else
                        return bad;
                    }
                return currentNode->val;
            }
            return bad;
        }

        //Strictly for testing purposes only
        //O(n)
        void showList() {
            node<T>* currentNode = front;
            //
            if (currentNode != NULL) {
                cout << currentNode->val << endl;
                //While loop is O(n)
                while (currentNode->next != NULL) {
                    currentNode = currentNode->next;
                    cout << currentNode->val << endl;
                }
            }
        }
};