// Exercise 3.4 - Value Sorter

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() {  cout<<"Enter a key to exit.\n"; char ch; cin>>ch; } // Depending on your compiler you shall need this to keep the app open...


int main()
{
    int val1 = 0;
    int val2 = 0;
    cout << "Please enter two integers seperated by a space.\n";
    while(cin >> val1 >> val2){

    if(val1 > val2) // Checking both values using basic if-else statements.
        cout << val1 << " is greater than " << val2 << '\n';
    else
        cout << val2 << " is greater than " << val1 << '\n'; 
    if(val1 == val2)
        cout << val1 << " and " << val2 << " are equal.\n";


    cout << "Sum: " << val1+val2 << '\n'; // Getting the sum.
    cout << "Difference: " << val1-val2 << '\n'; // Difference.
    cout << "Product: " << val1*val2 << '\n'; // Product.

    if(val2 == 0) // Checking the second value, if it's zero we don't want our app to run into a error.
        cout << "Can't divide " << val1 << " by zero.\n";
    else // If not then proceed
        cout << "Ratio of " << val1 << " and " << val2 << " is " << val1/val2 << '\n';


    if(val2!=0 && val1 >= val2) // and making sure to include the remainder if there's any.
        cout << "With a remainder of " << val1%val2;
    }
    
    keep_window_open();
}
