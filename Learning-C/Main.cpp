#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	int x, y, z;
	String m_Name;
public:
	Entity() : m_Name("UnKnown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const {return m_Name; }
};

int main()
{
	int a = 2;
	int* b = new int[50];

	Entity* e = new Entity();
	delete e;
	delete [] b;
	// std::cin.get();
}