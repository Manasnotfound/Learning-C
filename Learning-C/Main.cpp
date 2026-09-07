#include <iostream>

struct Entity
{
	int x, y;

	static void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

int main()
{
	Entity e;
	Entity::x = 5;
	Entity::y = 10;

	Entity e1;
	Entity::x = 15;
	Entity::y = 20;


	Entity::Print();
	Entity::Print();

	return 0;
}

