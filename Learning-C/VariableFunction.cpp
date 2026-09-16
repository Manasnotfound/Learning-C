#include <iostream>
#include <string>

class Entity
{
public:
    virtual std::string GetName()
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
    std::string GetName() override {return M_name;}
}; 

void printName(Entity* entity)
{
    std::cout << entity-> GetName() << std::endl;
}

int main()
{
Entity *e = new Entity();
printName(e);

Player *p = new Player("John");
printName(p);
}