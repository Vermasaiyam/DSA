#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("saiyam");
    s.push("verma");
    
    cout << "Top " << s.top() << endl;
    s.pop(); // top vala pop hoga
    cout << "Top " << s.top() << endl;
    
    cout << "size " << s.size() << endl;
    cout << "empty or not" << s.empty() << endl;

    return 0;
}