#include <iostream>

class Entity{
	public:
		float x, y;
	
	void Move(float xa, float ya)
	{
		x = xa;
		y = ya;
	}
};

class player : public Entity
{
	public:
		const char* Name;
		void PrintName()
		{
			std::cout << Name << " is at position (" << x << ", " << y << ")" << std::endl;
		}
	};


int main()
{
	player player;
	player.x = 2.0f;
	player.y = 3.0f;
	player.Name = "John";
	player.PrintName();
}
