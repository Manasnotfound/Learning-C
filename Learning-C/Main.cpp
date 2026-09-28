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
	int a = 5;
	int* b = new int;
	std::cout << a << " " << b << std::endl;
	delete b;
	std::cout << b << std::endl;
	// std::cin.get();
}