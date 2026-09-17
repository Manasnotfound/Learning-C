#include <iostream>
#include <string>

class Printable
{
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
    virtual std::string GetName() {return "Entity";}
    std::string GetClassName() override {return "Entity";} 
};

class Player : public Entity
{
private:
    std::string m_name;
public:
    Player(const std::string& name) : m_name(name) {}
    
    std::string Getname() {return m_name;}
    std::string GetClassName() override {return "Player";}
}; 

void print(Printable* obj)
{
    std::cout << obj-> GetClassName() << std::endl;
}

int main()
{
Entity *e = new Entity();
print(e);

Player *p = new Player("John");
print(p);

print(e);
print(p);
}