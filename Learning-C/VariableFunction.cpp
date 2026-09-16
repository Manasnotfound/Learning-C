#include <iostream>
#include <string>
class Entity
{
public:
    std::string GetName()
    {
        return "Entity";
    }   
};

class Player : public Entity
{
private:
    std::string M_name;
public:
    Player(const std::string& name): M_name(name) {}
    std::string GetName() {return M_name;}
};
int main()
{
Entity *e = new Entity();
std::cout << e->GetName() << std::endl;

Player *p = new Player("John");
std::cout << p->GetName() << std::endl;
}