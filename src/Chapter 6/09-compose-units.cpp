#include "../std_lib_facilities.h"

vector<int> digits;
vector<string> units {" ones ", " tens ", " hundreds ", "  thousands ", " tens of thousands ", " hundreds of thousands ", " millions ", " tens of millions ",
                        " hundreds of millions "};

int main() {
    
    cout << "Enter an integer with no more than " << units.size() << " digits followed by by semicolon\n";
    
    char ch;
    while(cin>>ch){
        if(ch < '0' || '9' < ch) break;
        digits.push_back(ch-'0');
    }
    
    if (digits.size() == 0) cout << "no digits\n";
    if (digits.size() > units.size()) cout << "more digits than the units.\n";
    int num = 0;
    for (int i = 0; i < digits.size(); i++)
    {
        if (digits[i]) { // make sure it's more than 0  
            cout << digits[i] << units[digits.size()-i-1];
            num = num*10+digits[i];
        }
    }
    cout << "that is also: " << num << endl;
    keep_window_open();
}