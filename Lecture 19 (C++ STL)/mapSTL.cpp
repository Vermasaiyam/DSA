#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Saiyam";
    m[2] = "Verma";
    m[13] = "Meerut";
    
    for (auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout << endl;
    
    m.insert({5, "UP"});
    
    cout << "Finding 13 " << m.count(13) << endl;
    
    m.erase(13);
    for (auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    return 0;
}
