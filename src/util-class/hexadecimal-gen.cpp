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

	  oss << std::hex << std::setw(8) << std::setfill('0') << input;

	  const auto as_hex { oss.str() };
    return as_hex;
  }
};  