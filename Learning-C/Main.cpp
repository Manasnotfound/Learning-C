#include <iostream>

class Entity
{
public:
	float X, Y;

	void print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

int main()
{
	Entity e;
	e.print();
}