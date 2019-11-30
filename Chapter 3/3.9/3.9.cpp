// a program that checks if the strings are a spelled out numbers and then converts them to digits.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin>>ch; } // Depending on your compiler you shall need this to keep the app open...

int main() 
{
    string spell = " ";
    cout << "Spell a number \n";
    while(cin >> spell)
    {
        if(spell == "zero")
            cout << "0\n";
        else if (spell =="one") // else if is to specify a new statement if the first IF statement is false.
            cout << "one\n";
        else if (spell =="two") // which goes on and on. until you decide to stop.
            cout << "two\n";
        else // whereas else is just the opposite of the if statement.
        cout << "I don't know that... yet.\n";                        
    }
}