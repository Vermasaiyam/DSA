#include <iostream>
#include <array>


using namespace std;

int main()
{
    int basic[4] = {1,2,3,4};
    
    array<int,4> arr = {1,2,3,5};
    
    cout << arr.size()<<endl;
    cout << arr.empty() << endl;
    cout << arr.at(2) << endl;
    cout << "first element" << arr.front() << endl;
    cout << "last element" << arr.back() << endl;

    return 0;
}