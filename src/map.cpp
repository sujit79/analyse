#include <iostream>
using namespace std;
#include "params.h"
#include "results.h"

template<class P, class T>  
class Mapper {
public:
    
    virtual T* operate() = 0;
    virtual T* operate(P input []) = 0;
};