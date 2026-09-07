#include <iostream>

enum Example : unsigned int
{
	A = 8, B, C
};



int main()
{
	Example value = B;
	std::cout << "Value: " << value << std::endl;
	std::cin.get();
}