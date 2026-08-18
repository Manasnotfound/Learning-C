#include <iostream>
#include "Log.h"

int MultiplyAndLog(int a, int b)
{
	int result = a * b;
	log("The result of multiplying 5 and 3 is: 15");
	return result;
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}


int main()
{
	Log("Starting the program...");
	MultiplyAndLog(5, 3);
	MultiplyAndLog(10, 2);
	MultiplyAndLog(7, 4);
}