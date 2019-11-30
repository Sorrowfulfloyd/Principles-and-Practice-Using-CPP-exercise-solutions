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
    if(val1 > val2)
        cout << val1 << " is greater than " << val2 << '\n';
    else
        cout << val2 << " is greater than " << val1 << '\n';    
    if(val1 == val2)
        cout << val1 << " and " << val2 << " are equal.\n";
    cout << "Sum: " << val1+val2 << '\n';
    cout << "Difference: " << val1-val2 << '\n';   
    cout << "Product: " << val1*val2 << '\n';
    }
    keep_window_open();
}