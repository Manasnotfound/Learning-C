#include <iostream>

extern int s_variable;

static void increment(int& value)
{
	value++;
}

int main()
{
	std::cout << "Static variable value: " << s_variable << std::endl;
	
}