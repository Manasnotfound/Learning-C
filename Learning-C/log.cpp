#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n = 1;
	bool LOOP = true;
	for (; LOOP;)
	{cout << "loop Works" << endl;
		n++;
		if (n > 4)
		{
			LOOP = false;
		}
	}	
	cout << "=========================" << endl;
	n = 1;
	while (!LOOP)
	{
		cout << "while Works" << endl;
		n++;
		if (n > 4)
		{
			LOOP = true;	
		}
	}
	cout << "========================="<< n << endl;
	do
	{
		cout << "do while Works" << endl;
		n++;
		if (n > 8)
		{
			LOOP = false;
		}
	} while (!LOOP);
	
}