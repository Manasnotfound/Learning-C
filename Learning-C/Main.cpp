#include <iostream>
#include <string>

class Entity
{
private:
	int m_score;
	std::string m_Name;
public:
	Entity()
		:m_Name("UnKnown"), m_score(80){}

	Entity(const std::string& name)
		:m_Name(name){}

	const std::string& GetName() const {return m_Name; }
};

int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;
	 
	Entity e1("Manas");
	std::cout <<  e1.GetName() << std::endl;
}