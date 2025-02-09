#include <iostream>
using namespace std;

class parent
{
public:
    void show()
    {
        cout << " papa" << endl;
    }
};
class child1 : public parent
{
public:
    void show()
    {
        cout << " baccha 1" << endl;
    }
};
class child2 : public parent
{
public:
    void show()
    {
        cout << " baccha 2" << endl;
    }
};

int main()
{
    child1 obj1;
    child2 obj2;
    obj1.show();
    obj2.show();

    return 0;
}