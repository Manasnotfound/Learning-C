#include <iostream>
#include<stdlib.h>
using namespace std;

class Player
{
	public:
		int x, y;
		int speed;
};

void Move(Player& P1, int dx, int dy)
{
	P1.x += dx * P1.speed;
	P1.y += dy * P1.speed;
}

int main(){
	Player P1;
	Move(P1, 1, 0);	
} 