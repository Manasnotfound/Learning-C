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
	Entity* e;
	{
		Entity* entity = new Entity("MANAS");
		e = entity;
		std::cout << entity->GetName() << std::endl;
	}
	delete e;
	// std::cin.get();
}