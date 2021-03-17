// Stephen Oium 
// Assignment 6
// Binary Search Tree w/ Extra Stuff 
// February 2021 

#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

template <class T>
class BinaryTree 
{
    private:
        struct node{
            T data;
            node *left;
            node *right;
        };

    public:
        node *root;

        BinaryTree();
        void addData(T value);
        //node* deleteData(node *branch, T value);
        void deleteData(node *branch, T value);
        void printTree(node *branch);
};

template <class T>
BinaryTree<T>::BinaryTree()
{
    root = new node;
    root = NULL;
}

template <class T>
void BinaryTree<T>::addData(T value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    node *currentNode = root;
    bool loop = true;

    if (root != NULL)
    {
        while (loop == true)
        {
            // Is the value I am trying to add bigger or smaller than the current value?
            if(newNode->data < currentNode->data)
            {
                if(currentNode->left != NULL)
                {
                    // Search left half of tree
                    currentNode = currentNode->left;
                }
                else
                {
                    currentNode->left = newNode;
                    loop = false;
                }
            }
            else
            {
                if(currentNode->right != NULL)
                {
                    // Search right half of tree
                    currentNode = currentNode->right;
                }
                else
                {
                    currentNode->right = newNode;
                    loop = false;
                }
            }
        }
    }
    else // Root must be empty!
    {
        root = newNode;
    }
}



template <class T>
void BinaryTree<T>::deleteData(node *branch, T value)
{ 
	node *previousNode = root;
	node *currentNode = root;

    // Search through the tree to find if the desired data is
    while (currentNode != NULL && currentNode->data != value)
	{
        previousNode = currentNode;
        if (value < currentNode->data)
        {
            currentNode = currentNode->left;
        }
        else
        {
            currentNode = currentNode->right;
        }
    }

    if (currentNode != NULL)
    {
        // Does the node to delete have no children?
        if(currentNode->left == NULL && currentNode->right == NULL)
        {
            // Is the node to delete a left child?
            if(previousNode->left == currentNode)
            {
                previousNode->left = NULL;
            }
            // Is the node to delete a right child?
            else
            {
                previousNode->right = NULL;
            }
            delete currentNode;
            cout << "The value " << value << " has been removed from the Tree!" << endl << endl;
        }
        // Does the node to delete only have one child?
        else if ((currentNode->left == NULL && currentNode->right != NULL) || (currentNode->left != NULL && currentNode->right == NULL))
        {
            // Is that child on the right?
            if (currentNode->left == NULL && currentNode->right != NULL)
            {
                // Is this node a left child?
                if (previousNode->left == currentNode)
                {
                    // If so than this node's sole right child becomes the new parent to this node
                    // And this node gets deleted
                    previousNode->left = currentNode->right;
                    delete currentNode;
                    currentNode = NULL;
                    cout << "The value " << value << " has been removed from the Tree!" << endl << endl;
                }
                // Is this node a right child?
                else
                {
                    // If so than this node's sole right child becomes the new parent to this node
                    // And this node gets deleted
                    previousNode->right = currentNode->right;
                    delete currentNode;
                    currentNode = NULL;
                    cout << "The value " << value << " has been removed from the Tree!" << endl << endl;
                }
            }
            else // Is that child on the left?
            {
                if(previousNode->left == currentNode)
                {
                    // If so than this node's sole left child becomes the new parent to this node
                    // And this node gets deleted
                    previousNode->left = currentNode->left;
                    delete currentNode;
                    currentNode = NULL;
                    cout << "The value " << value << " has been removed from the Tree!" << endl << endl;
                }
                else
                {
                    // If so than this node's sole left child becomes the new parent to this node
                    // And this node gets deleted
                    previousNode->right = currentNode->left;
                    delete currentNode;
                    currentNode = NULL;
                    cout << "The value " << value << " has been removed from the Tree!" << endl << endl;
                }
            }
        }
        // The node to delete must have two children
        // We must replace deleted node with smallest value in right subtree
        else
        {
            // Does the node to delete's right child have no children?
            node* tempNode = currentNode->right;
            if((currentNode->left == NULL) && (currentNode->right == NULL))
            {
                currentNode = tempNode;
                delete tempNode;
                cout << "The value " << value << " has been removed from the Tree!" << endl << endl;
            }
            // The node to delete's right node has children...
            else
            {
                // Does the node to delete's right child have a left child?
                if(currentNode->right->left != NULL)
                {
                    node* subCurrentNode;
                    node* subPreviousNode;
                    subPreviousNode = currentNode->right;
                    subCurrentNode = currentNode->right->left;

                    // Keep moving down until smalled element is found
                    while(subCurrentNode->left != NULL)
                    {
                        subPreviousNode = subCurrentNode;
                        subCurrentNode = subCurrentNode->left;
                    }
                    currentNode->data = subCurrentNode->data;
                    delete subCurrentNode;
                    subPreviousNode->left = NULL;
                    cout << "The value " << value << " has been removed from the Tree!" << endl << endl;
                }
                else
                {
                    tempNode = currentNode->right;
                    currentNode->data = tempNode->data;
                    currentNode->right = tempNode->right;
                    delete tempNode;
                    cout << "The value " << value << " has been removed from the Tree!" << endl << endl;
                }
            }
		}
	}
    else
    {
        cout << "The value " << value << " is not in the tree!" << endl << endl;
    }
}

template <class T>
void BinaryTree<T>::printTree(node *branch)
{
    // Don't print if there is no tree!
    if (branch != NULL)
    {
        printTree(branch->left);
        cout << branch->data << endl;
        printTree(branch->right);
    }
}
