#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    for (auto i:s){
        cout << i << " ";
    }cout << endl;
    
    s.erase(s.begin()); // jo index denge vo dlt hoga
    for (auto i:s){
        cout << i << " ";
    }cout << endl;
    
    set<int>::iterator it = s.begin();
    it++;
    
    s.erase(it);
    for (auto i:s){
        cout << i << " ";
    }cout << endl;
    
    cout << "present or not? " << s.count(5) << endl;
    
    //find krne ka
    set<int>::iterator itr = s.find(1); // iss value ka reference mil jayega
    
    for(auto it = itr ; it!=s.end() ; it++){
        cout << *it << " ";
    }cout <<endl;
    

    return 0;
}