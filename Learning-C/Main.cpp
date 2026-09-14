#include <iostream>

class Entity
{
public:
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};

class Player : public Entity
{
	public:
		const char* Name;

		void print()
		{
			std::cout << Name << " is at " << X << ", " << Y << std::endl;
		}
};

int main()
{
	Player player;
	player.X = 2.0f;
	player.Y = 3.0f;
	player.Name = "John";
	player.print();
}