#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("saiyam");
    q.push("verma");
    
    cout << "First element " << q.front() << endl;
    cout << "Last element " << q.back() << endl;
    
    q.pop();
    cout << "First element " << q.front() << endl;
    
    cout << "size " << q.size() << endl;
    // empty same hai...
    
    
    
    return 0;
}