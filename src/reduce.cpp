#include <iostream>
using namespace std;

class Reducer {
public:

    virtual string operate() = 0;
    virtual string operate(string input) = 0;

};