#include <iostream>

struct Entity
{
    int x, y;

    void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int main()
{
    Entity e;
    e.x = 5;
    e.y = 10;

    Entity e1;
    e1.x = 15;
    e1.y = 20;

    Entity e2;
    e2.x = 25;
    e2.y = 30;

    e.Print();
    e1.Print();
    e2.Print();

    return 0;
}