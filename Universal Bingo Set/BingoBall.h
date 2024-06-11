#ifndef BINGOBALL_H
#define BINGOBALL_H
#include <iostream>
using namespace std;
class BingoBall {
public:
    //default constructer - creates a B-1 Bingo Ball as a default ball
    BingoBall() :
        letter('B'), number(1) {} 
    //constructs a bingoBall within the following values
    //B: 1-15, I: 16-30, N: 31-45, G: 46-60, O: 61-75
    BingoBall(char let, int num) :
letter( let ), number( num ) {}
    //copy constructer - creates a duplicated bingo ball based on the parameter
    BingoBall(const BingoBall &b1) {number = b1.number; letter = b1.letter; }
        
    //returns letter
char getChar() const { return letter; }
    //returns number
    int getNumber() const { return number; }
//overload == operator
bool operator==(const BingoBall& b) { return (number == b.getNumber() && 
letter == b.getChar()); }
private:
    int number;
    char letter;
};
//overload cout
inline std::ostream& operator<<(std::ostream& out, const BingoBall& b) {
out << b.getChar() << "-" << b.getNumber(); return out;
}
#endif /* BINGOBALL_H */