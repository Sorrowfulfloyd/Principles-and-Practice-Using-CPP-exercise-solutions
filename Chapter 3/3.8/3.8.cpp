// let's say our int is 5.  a way to handle this, is (simply) substracting it by 2 and check if there's a remainder (which will be 1).
// If so then we can declare that our integer is odd. If not then it's even. (also for negative numbers.)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin>>ch; } // Depending on your compiler you shall need this to keep the app open...

int main() 
{
    int val1 = 0;

    cout << "Enter the number to see if it's odd or even.\n";
    while(cin >> val1)
    {
        if(val1 % 2 == 0) // Basically we substract it by 2 and check if it's equal to 0.
        {
            cout << val1 << " is even.\n"; // if it's equal to 0, then we can say that there's no remainder.
        }
        else
        {
            cout << val1 << " is odd.\n"; // if not, the number is odd.
        }
        
    }
    keep_window_open();
}


// Example: 5%2 is 5-2-2 = 1, is 1 equals to 0, nope then it should be an odd number.

