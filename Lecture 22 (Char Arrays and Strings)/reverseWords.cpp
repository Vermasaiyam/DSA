#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

string reverseStringByWords(string s) {
  vector < string > words;
  string word = "";
  
  for (char c: s) {
  
    if (c == ' ') {
      words.push_back(word);
      word = "";
    } 
    else {
      word += c;
    }
  }
  
  words.push_back(word);
  string ans = "";
  reverse(words.begin(), words.end());
  
  for (auto x: words) {
    ans += x;
    ans += " ";
  }
  return ans;
}

int main()
{
    string s = "My name is";
    string str = reverseStringByWords(s);
    
    cout << str;

    return 0;
}


