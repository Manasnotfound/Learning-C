#include <iostream>
#include<stdlib.h>
using namespace std;

class Player
{
	public:
		int x, y;
		int speed;
		int* Move(int xa, int ya)
		{
			x += xa * speed;
			y += ya * speed;
			return &x; // This is a simple return, you might want to return both coordinates
		}
};

int main(){
	Player P1;
	cout<<*P1.Move(1, 0)<<endl;	
} 