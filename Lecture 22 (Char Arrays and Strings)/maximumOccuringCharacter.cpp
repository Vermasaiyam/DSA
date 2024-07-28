#include <iostream>

using namespace std;

char maxChar(string s){
    int arr[26] = {0};
    for (int i=0 ; i<s.length() ; i++){
        // lowercase
        int number = 0;
        if (s[i] >= 'a' && s[i] <='z'){
            number = s[i] - 'a';
        }
        // Uppercase
        else if (s[i] >= 'A' && s[i] <='Z'){
            number = s[i] - 'A';
        }
        arr[number]++;
    }
    
    int maxi=-1, ans=-1;
    for (int i=0 ; i<26 ; i++){
        if (arr[i] > maxi){
            maxi = arr[i];
            ans = i;
        }
    }
    return ('a' + ans);
}

int main()
{
    string s = "test";
    
    cout << maxChar(s);

    return 0;
}