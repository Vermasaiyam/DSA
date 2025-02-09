#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    static int timeToComplete;

    static int random()
    {
        return timeToComplete;
    }

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
    Hero()
    {
        cout << "Simple" << endl;
    }
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

    // destructor
    ~Hero()
    {
        cout << "destructor" << endl;
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

int Hero::timeToComplete = 5;

int main()
{
    // calling static function
    cout << Hero::random() << endl;

    cout << Hero::timeToComplete << endl;
    // static
    Hero a;

    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 10;

    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;
    cout << Hero::timeToComplete << endl;

    return 0;
}