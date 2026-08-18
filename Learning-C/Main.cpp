#include <iostream>

int MultiplyAndLog(int a, int b)
{
	int result = a * b;
	std::cout << "The result of multiplying " << a << " and " << b << " is: " << result << std::endl;
	return result;
}

void log(const char* message)
{
	std::cout << message << std::endl;
}


int main()
{
	log("Starting the multiplication and logging process...")
	MultiplyAndLog(5, 3);
	MultiplyAndLog(10, 2);
	MultiplyAndLog(7, 4);
}