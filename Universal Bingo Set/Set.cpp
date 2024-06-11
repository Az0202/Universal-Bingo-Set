#include "Set.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

template <typename T>
Set<T>::Set(){
    head = new Node();
    tail = new Node();
    //cursor = NULL;

    head->next = tail;
    tail->prev = head;
    head->prev = NULL;
    tail->next = NULL;

    numEntries = 0;
}

template <typename T>
Set<T>::~Set(){
    //make the set empty
    Node* current = head->next;
    Node* n = NULL;

    while(current->next != NULL){
        n = current->next;
        delete(current);
        current = n;
    }

    //numEntries = 0;
    head->next = tail;
    tail->prev = head;

    delete(head);
    delete(tail);

}

template <typename T>
bool Set<T>::isEmpty() const {
    if(head->next==tail){
        return true;
    } else{
        return false;
    }
}

template <typename T>
bool Set<T>::isIn(const T& elem) const{
    Node* ptr = head->next;
    while(ptr != tail){
        if(*(ptr->element) == elem){
            return true;
        }
        ptr = ptr->next;
    }

    return false;
}

template <typename T>
bool Set<T>::add(const T& elem) { 
    //need to check if in thier on not
    if(isIn(elem)){
        return true;
    }
    
    numEntries++;
    Node* n = new Node();

    tail->element = (T *)&elem;
    tail->next = n;
    n->prev = tail;
    n->next = NULL;

    tail = n;

    return true;
}

template <typename T>
T Set<T>::remove(){
    int random_number = rand() % 4;    //generate random number between 0 and total number of items
    int i = 0;
    Node* ret_val = head->next;
    Node* ptr = head->next;
    while(ptr != tail){
        if(i == random_number){
            ret_val = ptr;
        }
        i++;
        ptr = ptr->next;
    }

    //delete the element from the set

    T value= *(ret_val->element);
    remove(value);
    return value;
}

template <typename T>
void Set<T>::remove(const T& elem){
    Node* ptr = head->next;

    while(ptr->next != NULL){
        if(*(ptr->element) == elem){
            ptr->prev->next = ptr->next;
            ptr->next->prev = ptr->prev;
            delete(ptr);
            numEntries--;
            break;
        }
        ptr = ptr->next;
    }
}


template <typename T>
ostream &operator<<(std::ostream& out, Set<T>& p) {

    vector<T> temp;
    while(p.isEmpty() != 1){
        T value = p.remove();
        temp.push_back(value);
        out<<value<<" - ";
    }

    cout<<"infunction: "<<p.isEmpty();

    // add values back to the set
    for(int i = 0; i < temp.size(); ++i){
        T value = temp.at(i);
        T* ptr = new T();
        *ptr = value;

        cout<<'\n'<<*ptr;
        cout<<p.add(*ptr);
    }

    return out;
} 