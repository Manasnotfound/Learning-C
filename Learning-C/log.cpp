#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n = 1;
	bool comparison = n == 10;
	if (comparison)
	{
		cout << "Hello' World" << endl;
		return 0;
	}
	else
	{
		cout << "Bye World" << endl;
	}
	cin.get();
}