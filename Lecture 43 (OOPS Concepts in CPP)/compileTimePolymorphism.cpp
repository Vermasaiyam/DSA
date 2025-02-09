#include <iostream>
using namespace std;

// complile time polymorphism

class A
{
public:
    // (a) Function overloading
    void say()
    {
        cout << " Hello" << endl;
    }

    // neecha vala will give error as only return type is changed
    /*int say(){
        cout << "Hi" << endl;
    }*/

    // iske parameter alg h to no error
    void say(string name)
    {
        cout << "Gian" << endl;
    }

    // ye neeche vala bhi chl jayega kyuki parameter ka datatype alg hai
    int say(char name)
    {
        cout << "Sunio" << endl;
        return 1;
    }
};

class B
{

public:
    int a;
    int b;

    // operator overloading
    void operator+(B &obj)
    {
        int val1 = this->a;
        int val2 = obj.a;

        cout << "answer = " << val2 - val1 << endl;
        cout << "Hello" << endl;
    }
};

int main()
{
    // A obj;
    // obj.say();

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    return 0;
}