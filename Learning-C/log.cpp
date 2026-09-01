#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	char* buffer = new char[10];
	memset(buffer, 0, 10);

	delete[] buffer;
}