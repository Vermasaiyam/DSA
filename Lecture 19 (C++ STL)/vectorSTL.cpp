#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Size: " << v.capacity() << "\t" << v.size() << endl;
    v.push_back(1);
    cout << "Size: " << v.capacity() << "\t" << v.size() << endl;
    v.push_back(2);
    cout << "Size: " << v.capacity() << "\t" << v.size() << endl;
    v.push_back(3);
    cout << "Size: " << v.capacity() << "\t" << v.size() << endl;
    
    cout << "at 2nd index" << v.at(2) << endl;
    cout << "Front " << v.front() << endl;
    cout << "Back " << v.back() << endl;
    
    v.pop_back();
    cout << "Size: " << v.capacity() << "\t" << v.size() << endl;
    
    v.clear();
    cout << "Size: " << v.capacity() << "\t" << v.size() << endl;
    
    
    return 0;
}