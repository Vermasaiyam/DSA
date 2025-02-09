#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // user defined constructor
    Hero()
    {
        cout << "Constructor Called" << endl;
    }

    void print()
    {
        cout << level << endl;
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
    // creating an object statically
    Hero a;
    a.setLevel('A');
    a.setHealth(90);

    cout << a.level << endl;
    cout << a.getHealth() << endl;

    // creating dynamic object
    Hero *b = new Hero;
    b->setLevel('B');
    b->setHealth(100);

    cout << (*b).level << endl;
    cout << (*b).getHealth() << endl;
    // or
    cout << b->level << endl;
    cout << b->getHealth() << endl;

    // ramesh.health = 70; // will give error as health is in private modifier..
    //  ramesh.setHealth(70);
    //  ramesh.level = 'A';

    // cout << "health " << ramesh.getHealth() << endl;
    // cout << "level " << ramesh.level << endl;

    return 0;
}
