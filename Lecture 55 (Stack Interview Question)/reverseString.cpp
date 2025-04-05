#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string input = "saiyam";
    stack<char> s;

    for (int i = 0; i < input.length(); i++)
    {
        s.push(input[i]);
    }
    string ans = "";
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    cout << ans << endl;

    return 0;
}