#include <iostream>
#include<stdlib.h>
using namespace std;


void output()
{
	cout << "Hello World" << endl;
}

int main()
{
	int n;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		output();
	}
	return 0;
	
}