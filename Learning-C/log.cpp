#include <iostream>
#include<stdlib.h>
using namespace std;
#include "log.h"

void increment(int& value)
{
	value++;
}

int main()
{
	int a = 10;
	int b = 90;
	
	int& ref = a;
	ref = b;
	
	increment(a);
	log(a);

}