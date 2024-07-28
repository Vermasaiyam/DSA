#include <iostream>

using namespace std;

void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<=e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int c=0;
    for (int i=0 ; name[i]!='\0' ; i++){
        c++;
    }
    return c;
}

int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Your name is " << name << endl;
    
    int len = getLength(name);
    cout << "Length = " << len << endl;
    
    reverse(name, len);
    cout << "Reverse = " << name;

    return 0;
}