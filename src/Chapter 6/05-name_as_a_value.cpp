// Define a class Name_value that holds a string and a value. Rework exercise 19 in Chapter 4 to use a
// vector<Name_value> instead of two vectors.

#include "../std_lib_facilities.h"

class nameValue {
public:
    nameValue(string n, int s) : name(n), score(s) { }
    string name;
    int score;
};

int main()
try
{
    vector<nameValue> nameAndAge;
    string n;
    int s;
    cout << "Enter name followed by an age to be collected, or 'noname' and '0' to end the entry.\n";
    while (cin >> n >> s) {
        if (n == "noname" && s == 0){
            break;
        }
        for (int i = 0; i < nameAndAge.size(); i++) {
            if (nameAndAge[i].name == n) {
                cout << "This name already exists " << n << endl;
            }
        }
        nameAndAge.push_back(nameValue(n, s));
    }
    for (int i = 0; i < nameAndAge.size(); i++) {
        if (nameAndAge[i].name != "" && nameAndAge[i].score != 0){
            cout << "Name: " << nameAndAge[i].name << " Score: " << nameAndAge[i].score << "\n";
        }
    }
    keep_window_open();
}

catch (runtime_error e) {
    cout << e.what() << "\n";
    keep_window_open();
}
catch (...) {
    cout << "Exiting \n";
    keep_window_open();
}