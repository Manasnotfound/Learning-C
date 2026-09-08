#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}

	void print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

class Log
{
public:
	Log() = default;
	static void write()
	{

	}
};


int main()
{
	Log::write();
	Log l;

	Entity e(2.0f, 3.0f);
	std::cout << e.X << ", " << e.Y << std::endl;
	e.print();
}