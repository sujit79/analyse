#include <iostream>
#include <bitset>
#include <string>
#include <iomanip>
#include <sstream>

template<class T>
class HexaDecimalFromType  
{  
  public: std::string hexa_from_string(T input){
    std::ostringstream oss;

	  oss << std::hex << input;

	  const auto as_hex { oss.str() };
    return as_hex;
  }
};  