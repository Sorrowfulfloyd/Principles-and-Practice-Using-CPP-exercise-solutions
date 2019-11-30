// Exercise 3.6 - Numerical Sequence from smallest to largest

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin>>ch; } // Depending on your compiler you shall need this to keep the app open...


int main() {
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    int small = 0; 
    int medium = 0;
    int xlarge = 0;
    cout << "Enter three numbers to get them sequenced from smallest to biggest.\n";
    while(cin >> val1 >> val2 >> val3)
    {
        if(val1 <= val2 && val1 <= val3)
        {
            small = val1;
        if(val2 <= val3)
        {
            medium = val2;
            xlarge = val3; 
        }
        else 
        {
            xlarge = val2;
            medium = val3;
        }
        }
        else if(val2 <= val1 && val2 <= val3)
        {
            small = val2;
        if(val1 <= val3)
        {
            medium = val1;
            xlarge = val3;
        }
        else
        {
            xlarge = val1;
            medium = val3;
        }    
        }
        else if(val3 <= val1 && val3 <= val2)
        {
            small = val3;
        if(val1 <= val2)
        {
            medium = val1;
            xlarge = val2;
        }
        else
        {
            xlarge = val1;
            medium = val2;
        }    
        }
        
        
    cout << "The numbers you've entered from smallest to biggest are: " << small << " " << medium << " " << xlarge << '\n'; 

    }



    keep_window_open();
}