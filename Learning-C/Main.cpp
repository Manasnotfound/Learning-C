#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()
	{
		std::cout << "Entity created" << std::endl;
		X = 0.0f;
		Y = 0.0f;
	}

	~Entity()
	{
		std::cout << "Entity destroyed" << std::endl;
	}
	
	void print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};
void function()
{
	Entity e;
	e.print();
}

int main()
{
	function();
}