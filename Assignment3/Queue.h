#include "node.h"

using std::cout;
using std::endl;

template <class T> // add a template 
class Queue { // using nodes and classes 

    private:
        node<T>* front;
        node<T>* back;

    public:
        Queue() {
            front = NULL;
            back = NULL;
        }

        //O(1)
        void enqueue(T newVal) { // new value 
            if (back != NULL) { // if null 
                node<T>* oldBack = back; // old back 
                back = new node<T>; // new node 
                back->val = newVal; // new int or value 
                back->next = NULL;
                oldBack->next = back;
            } else {
                back = new node<T>;
                front = back;
                back->val = newVal;
                back->next = NULL;
            }
        }

        // minus one or deque
        T dequeue() {
            T returnVal = -1;
            if (front != NULL) {
                returnVal = front->val;
                if (front->next != NULL) {
                    front = front->next;
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
                node<T>* current = front;
                cout << current->val << endl;
                while (current->next != NULL) {
                    current = current->next;
                    cout << current->val << endl;
                }
            }
        }
};

