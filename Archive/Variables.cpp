#include <iostream>

int main()
{
	//unsigned char, short, int, long, long long, long int // signed integer types
	unsigned int variable = 8; // -2b -> 2b 
	std::cout << variable << std::endl;
	variable = 20; // 2b -> -2b
	std::cout << variable << std::endl;
	std::cin.get();

	short a = 65; // 1b
	std::cout << a << std::endl;

	float variableFloat = 5.5f;
	double var = 5.2;
	std::cout << variableFloat << std::endl;

	bool boolVar = true; // 1 bit
	std::cout << boolVar << std::endl;
	std::cout << sizeof(double) << std::endl;
}