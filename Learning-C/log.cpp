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
		if (n > 20)
		{
			LOOP = false;
		}
	}	
}