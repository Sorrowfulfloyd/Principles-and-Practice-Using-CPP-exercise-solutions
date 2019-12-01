// so a basic calculator but the user also gives us the operator such as + - * /
// unlike what the books suggests I decided to put the notation sign in between the inputs.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin>>ch; } // Depending on your compiler you shall need this to keep the app open...



int main()
{
double val1 = 0;
double val2 = 0;
string notation = " ";
cout << "Enter two numbers and a notation sign between them.\n" << "Allowed notation signs are: +, -, *, /\n";
while(cin >> val1 >> notation >> val2) // iostream will ignore the white spaces
{
    if(notation == "+") // Mr. Stroustrup used "||" so the loop can read more possible inputs - such as + or "plus".
    {
        cout << val1 << " plus " << val2 << " is " << val1+val2 << '\n';
    }
    else if(notation == "-")
    {
        cout << val1 << " minus " << val2 << " is " << val1-val2 << '\n';
    } 
    else if(notation == "*")
    {
        cout << val1 << " times " << val2 << " is " << val1*val2 << '\n';
    }
    else if(notation == "/") // have to specilize a little here, bcuz we can't divide anything by zero.
    {
        if(val2 == 0)
        {
            cout << "Can't divide " << val1 << " by zero.\n";
        }
        else
        {
            cout << val1 << " divided by " << val2 << " is " << val1/val2 << '\n';
        }
        
    }
    else // notice how else if's used after the input starts. those practices in Chapter 3 is really good for getting a grip on if-else statements.
    {
        cout << "Unknown input. Please try again.\n";
    }
}
}