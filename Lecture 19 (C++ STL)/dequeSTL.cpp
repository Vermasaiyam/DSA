#include <iostream>
#include <deque>
using namespace std;

int main()
{
    
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (int i:d){
        cout << i << " ";
    }cout << endl;
    // d.pop_back();
    // d.pop_front();
    
    cout << "first index" << d.at(1) << endl;
    cout << "front " << d.front() << endl;
    cout << "Back " << d.back() << endl;
    cout << "Empty or not " << d.empty() << endl;
    cout << "size " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    for (int i:d){
        cout << i << " ";
    }cout << endl;

    return 0;
}
