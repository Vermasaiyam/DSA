#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    // user defined constructor
    Hero()
    {
        cout << "Simple" << endl;
        name = new char[100];
    }
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

    Hero(Hero &temp)
    {
        // copy constructor
        cout << "copy constructor" << endl;

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->level = temp.level;
        this->health = temp.health;
    }

    void print()
    {
        cout << this->name << endl;
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
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{

    Hero hero1;

    hero1.setLevel('A');
    hero1.setHealth(90);

    char name[7] = "Babbar";
    hero1.setName(name);

    // hero1.print();

    // copy constructor
    Hero hero2(hero1);

    // hero2.print();

    cout << endl;
    hero1.name[0] = 'G';

    hero1.print();
    hero2.print();

    // assignment operator
    hero1 = hero2;

    hero1.print();
    hero2.print();

    return 0;
}