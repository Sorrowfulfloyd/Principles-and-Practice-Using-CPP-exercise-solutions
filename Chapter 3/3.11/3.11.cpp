#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin>>ch; } // Depending on your compiler you shall need this to keep the app open...

int main()
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int halfs = 0;
    int dollars = 0;
    double sum = 0;
    string newsum = " ";
    cout << "How many pennies, nickels, dimes, quarters, half-dollars and dollars you've got?\n";
    while(cin >> pennies >> nickels >> dimes >> quarters >> halfs >> dollars)
    {
        if(pennies > 0) 
        {
        if(pennies == 1) cout << "You have " << pennies << " penny.\n";
        else if(pennies > 1) cout << "You have " << pennies << " pennies.\n";
        }

        if(nickels > 0) 
        {
        if(nickels == 1) cout << "You have " << nickels << " nickel.\n";
        else if(nickels > 1) cout << "You have " << nickels << " nickels.\n";
        }

        if(dimes > 0) 
        {
        if(dimes == 1) cout << "You have " << dimes << " dime.\n";
        else if(dimes > 1) cout << "You have " << dimes << " dimes.\n";
        }

        if(quarters > 0) 
        {
        if(quarters == 1) cout << "You have " << quarters << " quarter.\n";
        else if(pennies > 1) cout << "You have " << quarters << " quarters.\n";
        }

        if(halfs > 0) 
        {
        if(pennies == 1) cout << "You have " << halfs << " half-dollar.\n";
        else if(pennies > 1) cout << "You have " << halfs << " half-dollars.\n";
        }

        if(dollars > 0) 
        {
        if(dollars == 1) cout << "You have " << dollars << " dollar.\n";
        else if(dollars > 1) cout << "You have " << dollars << " dollars.\n";
        }
        sum = pennies*0.01 + (nickels*0.05) + (dimes*0.10) + (quarters*0.25) + (halfs*0.50) + (dollars*1.00);
        cout << "The value of all of your coins is $" << sum << '\n';
    }
    keep_window_open();
}