#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // user defined constructor
    Hero(int health)
    {
        cout << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // user defined copy constructor
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << this->health << endl;
        cout << this->level << endl;
    }

    // getter

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    // setter
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(int l)
    {
        level = l;
    }
};

int main()
{

    Hero S(70, 'C');

    // copy the constructor
    Hero R(S);

    S.print();
    R.print();

    // Hero ramesh(10);
    // cout << &ramesh << endl;

    // Hero temp(20, 'A');

    return 0;
}