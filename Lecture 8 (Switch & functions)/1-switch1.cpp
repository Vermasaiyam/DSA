#include <iostream>

using namespace std;

int main()
{
    // char num = '5';
    // switch (num){
    //     default: cout << "This is default case." << endl;
    //     case 1: cout << "first"<< endl;
    //             break;
    //     case '4': cout << "char" << endl;
    //             break;
    // }
    
    // use of continue is not valid in switch
    
    // goto condition
    int num = 1;
    while (true){
        switch (num){
            case 1: cout << "hello" << endl;
            
            // default: goto exit_loop;
            exit(0);
        }
        
    }
    // exit_loop: ;

    return 0;
}