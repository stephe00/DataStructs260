// stephen oium 
// assignment 7 
// cs260 
// 3.1.2021

// the hash table 

#include <iostream>
#include <list>
#include <cstring>
using namespace std; 

// hashtable to implement 503, stephen

class HashTable {
    // private 
    private: static const int hashGroups = 10; 
    list<pair<int, string>> table[hashGroups]; // list 1, index 0, etc. 

    public: 
    bool isEmpty[] const;
    int hashFunction(int key);
    void insertItem(int key, string value);
    void removeItem(int key);
    string searchTable(int key);
    void printTable();

};

bool HashTable::isEmpty[] const{
    int sum{};
    for (int i < hashGroups; i++) { 
        sum+= table[i].size();
    }
     if(!sum) { 
         return true; 
     }
     return false; 
}

// hash function 

int HashTable::hashFunction(int key){
    return key % hashGroups;

}

void HashTable::insertItem(int key, string value) {
    int hashValue = hashFunction(key);
    auto &cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr !=end(cell); bItr++) { 
        if(bItr->first == key) { 
            keyExists = true;
            bItr->second = value;
            cout << "[WARNING] Key exists. Value replaced. " << endl;
            break; 
        }
    }

    if (!keyExists) { 
        cell.emplace_back(key, value); 
       }
    return; 

}

void HashTable::removeItem(int key, string value) {
    int hashValue = hashFunction(key);
    auto &cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr !=end(cell); bItr++) { 
        if(bItr->first == key) { 
            keyExists = true;
            bItr = cell.erase(bItr);
            //bItr->second = value;
            cout << "[INFO] Item removed. " << endl;
            break; 
        }
    if (!keyExists) {
        cout << "[WARNING] Key not found. Pair not removed.  " << endl;
    }
        return; 
    }
void hashTable::printTable() { 
    for (int i{}; i < hashGroups; i++) { 
        if (table[i].size() == 0) continue; 

        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) { 
            cout << "[INFO] Key: " <<bItr-> first <<  "Value: " << bItr->second << endl;

        }
    

    }
    return; 
}

// main function 
int main() { 
    HashTable HT;
    if (HT.isEmpty() { 
        cout << "Correct answer. Good job." << endl; 
    } 
    else { 
        cout << "Ugh Oh. We need to check the code."
    }
    HT.insertItem(503, "stephen");
    HT.insertItem(123, "autumn");
    HT.insertItem(456, "karen");
    HT.insertItem(789, "oliver");
    HT.insertItem(201, "bob");
    HT.insertItem(322, "bill");
    HT.insertItem(523, "kris");
    HT.insertItem(201, "Robert");

    HT.printTable(); 

    HT.removeItem(201);
    HT.removeItem(523);

    if (HT.isEmpty() { 
        cout << "Ugh Oh. We need to check the code." << endl; 
    } 
    else { 
        cout << "Correct answer. Good job." << endl;
        
    }

     return 0; 
}



