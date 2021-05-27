#include"long.hpp"

int main() {

	big_integer bi1("1");
    big_integer bi2("2");
	big_integer bi3("3");
    big_integer bi4("4");
    big_integer bi5("5");
    big_integer bi6("6");
    big_integer bi7("7");
    std::cout << "--------------------------------Test power(small numbers)-----------------------------------------------" << std::endl;
    std::cout  <<"|" << bi1 << " to the power of " << bi2 << ": "<< bi1.pow(bi2) <<"|"<< std::endl;
    std::cout  <<"|" << bi2 << " to the power of " << bi3 << ": "<< bi2.pow(bi3) <<"|"<< std::endl;
    std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    std::cout  <<"|" << bi4 << " to the power of " << bi5 << ": "<< bi4.pow(bi5) <<"|"<< std::endl;
    std::cout  <<"|" << bi5 << " to the power of " << bi6 << ": "<< bi5.pow(bi6) <<"|"<< std::endl;
    std::cout  <<"|" << bi6 << " to the power of " << bi7 << ": "<< bi6.pow(bi7) <<"|"<< std::endl;
    std::cout  <<"|" << bi7 << " to the power of " << bi7 << ": "<< bi7.pow(bi7) <<"|"<< std::endl;
    std::cout  <<"|" << bi1 << " to the power of " << bi5 << ": "<< bi1.pow(bi5) <<"|"<< std::endl;
    std::cout  <<"|" << bi2 << " to the power of " << bi4 << ": "<< bi2.pow(bi4) <<"|"<< std::endl;
    std::cout  <<"|" << bi3 << " to the power of " << bi3 << ": "<< bi3.pow(bi3) <<"|"<< std::endl;
    std::cout  <<"|" << bi4 << " to the power of " << bi5 << ": "<< bi4.pow(bi5) <<"|"<< std::endl;
    std::cout  <<"|" << bi5 << " to the power of " << bi7 << ": "<< bi5.pow(bi7) <<"|"<< std::endl;
    std::cout  <<"|" << bi6 << " to the power of " << bi7 << ": "<< bi6.pow(bi7) <<"|"<< std::endl;
    std::cout  <<"|" << bi7 << " to the power of " << bi3 << ": "<< bi7.pow(bi3) <<"|"<< std::endl;
    // std::cout << "--------------------------------Test power-----------------------------------------------" << std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout << "--------------------------------Test power-----------------------------------------------" << std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout << "--------------------------------Test power-----------------------------------------------" << std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
    // std::cout  <<"|" << bi3 << " to the power of " << bi4 << ": "<< bi3.pow(bi4) <<"|"<< std::endl;
	// big_integer f = 1;
	// for (big_integer i = 2; i <= bi2; ++i) f *= i;
	
}