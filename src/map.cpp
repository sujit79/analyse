#include <iostream>
using namespace std;

class Mapper {
public:
    
    virtual string operate() = 0;
    virtual string operate(string input) = 0;

};