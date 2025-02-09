#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "a" << endl;
    }
};
class B
{
public:
    void func()
    {
        cout << "b" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    // obj.func() // it will give error: inheritance ambiguity

    obj.A::func();
    obj.B::func();

    return 0;
}