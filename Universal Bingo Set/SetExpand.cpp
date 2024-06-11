
#include "Set.cpp"
#include "BingoBall.h"
#include <string>

using namespace std;

template class Set<BingoBall>;
template class Set<int>;
template class Set<char>;
template class Set<string>;
template std::ostream& operator<<(std::ostream& out, Set<int>& p);
template std::ostream& operator<<(std::ostream& out, Set<char>& p);
template std::ostream& operator<<(std::ostream& out, Set<string>& p);
template std::ostream& operator<<(std::ostream& out, Set<BingoBall>& p);     

