#include <iostream>
#include<vector>
using namespace std;

char toLower(char ch){
    if (ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else
        ch = ch - 'A' + 'a';
    return ch;
}

bool checkPalindrome(char name[], int size){
    int s = 0, e = size-1;
    
    while (s<=e){
        if (toLower(name[s]) != toLower(name[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    // approach 1 - ki ham reverse bna le uska aur fr original char srray ke sath compare kre
    
    // approach 2 - bina extra spae liye
    char name[20];
    
    cout << "Enter: ";
    cin >> name;
    
    bool ans = checkPalindrome(name, 5);
    
    if (ans == 1){
        cout << "Palindrome" << endl;
        return 0;
    }

    cout << "Not Palindrome" << endl;
    return 0;
}

