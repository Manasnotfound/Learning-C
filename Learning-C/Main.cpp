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
	Entity e0;
	std::cout << e0.GetName() << std::endl;
	 
	Entity e1("Manas");
	std::cout <<  e1.GetName() << std::endl;
}