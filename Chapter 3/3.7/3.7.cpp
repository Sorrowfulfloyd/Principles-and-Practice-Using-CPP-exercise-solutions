// Exercise 3.7 - String Sequence from Alphabetic Order

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() {  cout<<"Enter a key to exit.\n"; char ch; cin>>ch; } // Depending on your compiler you shall need this to keep the app open...

string val1 ;
string val2;
string val3;

string small;
string medium;
string xlarge;

int main()
{
    cout << "Enter three words to get them sequenced in an alphabetic order:\n";
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
    cout << "The strings you've entered in Alphabetic order: " << small << " " << medium << " " << xlarge << '\n'; 
    }
}