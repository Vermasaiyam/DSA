#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    
    for (int i:l){
        cout << i << " ";
    }cout << endl;
    
    // begin(), end(), empty(), back(), front(), pop_back(), pop_front(), erase() --> same hai
    
    l.erase(l.begin());
    cout << l.size() << endl;
    
    // for copying
    list<int> n(l);
    for (int i:n){
        cout << i << " ";
    }cout << endl;
    
    list<int> a(5,100);
    for (int i:a){
        cout << i << " ";
    }cout << endl;
    
    return 0;
}

