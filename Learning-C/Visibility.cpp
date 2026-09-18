#include <iostream>

class Entity{
    private:
        float X, Y;
        void Print() {}
    public:
        Entity()
        {
            X = 0;
            Print();
        }
};

class Public : public Entity
{
    public:
        Public(){
            X = 2.0;
            Print();
        }
};

int main(){
    Public player;
    player.X = 0.2;
    player.Y = 0.8;
    player.Print();
}