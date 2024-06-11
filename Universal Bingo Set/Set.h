#ifndef SET_H
#define SET_H
#include <iostream>
#include <time.h>
using namespace std;
template <typename T>
class Set {
public:
    //constructs an empty set of objects
    Set();
    //destructs any dynamically allocated set variables
    ~Set();
        
    //removes a random element of the set and returns it
    T remove(); //throws EmptySetException;
    //removes a specific element of the set and returns it if it exists
    //returns true if it removed it, false if it wasn't there
    void remove(const T& elem); //throws EmptySetException;
        
    //adds a specific element to the set if not already there
    //returns true if it is successful and false if not
    bool add(const T& elem);
    //return true if T is in the set
    bool isIn(const T& elem) const;
    // return true if empty
    bool isEmpty() const;
       
private:
    //For array based implementation
    T* theArray;
    int arraySize;

    //For linked list based implementation
    struct Node {
        T* element;
        Node* next;
        Node* prev;
    };
    Node* head;
    Node* tail;
    Node* cursor;

    //For either implementation??
    int numEntries;
    };
    
    //outputs all of the contents of the set
    template <typename T>
    ostream &operator<<(std::ostream& out, Set<T>& p);
/*{
    while (!p.isEmpty())
out << p.remove() << " ";
out << endl;  //I need add a code that put all the element bach in the set because when we desplay it il well delate all the elements
     return out;
} */
#endif 