#include <iostream>
#include "Set.h"
#include "BingoBall.h"
using namespace std;

int main() {

    

    //int a = 101;
    //int b = 202;
    //int c = 303;
    //int d = 404;
    //int e = 505;
    //int f = 303;

    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    char f = 'c'; 
    char g = 'g';

    //Set<int> s;
    //Set<char> s;

    /* BingoBall a('b', 9);
    BingoBall b('w', 3);
    BingoBall c('k', 5);
    BingoBall d('r', 1);
    BingoBall f('n', 7);
    BingoBall g('w', 3);
    BingoBall h('s', 2); */

    /* cout<<"isEmpty: "<<s.isEmpty()<<'\n';
    cout<<"Add: "<<s.add(a)<<'\n';
    cout<<"Add: "<<s.add(b)<<'\n';
    cout<<"Add: "<<s.add(c)<<'\n';
    cout<<"Add: "<<s.add(b)<<'\n';
    cout<<"Add: "<<s.add(d)<<'\n';
    cout<<"Add: "<<s.add(g)<<'\n';
    cout<<"isIn: "<<s.isIn(b)<<'\n';  
    cout<<"isIn: "<<s.isIn(f)<<'\n'; 
    cout<<"isEmpty: "<<s.isEmpty()<<'\n';
    cout<<"Testing remove():\n";
    cout<<s.remove()<<'\n';
    cout<<s.remove()<<'\n';
    cout<<s.remove()<<'\n';
    
    cout<<"Remove: "<<'\n';
    s.remove(f);    //removed c

cout<<"isEmpty: "<<s.isEmpty()<<'\n';
cout<<"ostream function check: \n";
cout<<s<<'\n';
//cout<<s<<'\n';
//cout<<s<<'\n';
cout<<"isEmpty: "<<s.isEmpty()<<'\n';
cout<<"Check remove after output: "<<s.remove()<<'\n';
cout<<"It comes here";
cout<<s<<'\n';
    // for(int i = 0; i < 10; i++)
    //     cout<<(rand() % 5)<< '\n';

} */

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