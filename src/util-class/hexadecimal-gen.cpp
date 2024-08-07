#include <iostream>
#include <bitset>
#include <string>
#include <iomanip>
#include <sstream>

class HexaDecimalFromString  
{  
  public: std::string hexa_from_string(std::string input){
    std::ostringstream oss;

	oss << std::hex << std::setw(8) << std::setfill('0') << std::bitset<32>{input}.to_ulong();

	const auto as_hex { oss.str() };
    return as_hex;
  }
};  