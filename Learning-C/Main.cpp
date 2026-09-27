#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	mutable int Debug_count = 0;
public:
	const std::string& GetName() const
	{
		 return m_Name; 
		 Debug_count++;
	}
};

int main()
{

	const Entity e;
	e.GetName();
}