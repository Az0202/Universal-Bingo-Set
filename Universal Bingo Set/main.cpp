#include <iostream>
#include "Set.h"
#include "BingoBall.h"
using namespace std;

int main() {
    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    char f = 'c'; 
    char g = 'g';
    
Set<BingoBall>* mySet = new Set<BingoBall>();

for(int i = 1; i <= 15; i++) {
    mySet->add(BingoBall('B',i));
}
for(int i = 16; i <= 30; i++) {
    mySet->add(BingoBall('I',i));
}
for(int i = 31; i <= 45; i++) {
    mySet->add(BingoBall('N',i));
}
for(int i = 46; i <= 60; i++) {
    mySet->add(BingoBall('G',i));
}
for(int i = 61; i <= 75; i++) {
    mySet->add(BingoBall('O',i));
}

cout << *mySet <<'\n';

cout<< *mySet <<'\n';

cout<< *mySet <<'\n';
}
