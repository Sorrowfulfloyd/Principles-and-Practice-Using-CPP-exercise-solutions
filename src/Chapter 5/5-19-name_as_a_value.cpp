// Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22. For each pair, add
// the name to a vector called names and the number to a vector called scores (in corresponding positions, so that if
// names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0. Check that each name is unique and
// terminate with an error message if a name is entered twice. Write out all the (name,score) pairs, one per line.

#include "../std_lib_facilities.h"

int main()
try
{
    string nameTemp;
    string nameInput;
    int nameCheck = 0;

    int ageTemp;

    vector<string> names;
    vector<int> scores;

    bool check = true;

    while (check == true) {
        cout << "Enter name and age pairs to be collected, or 'noname' and '0' to end the entry.\n";

        if (cin >> nameTemp >> ageTemp) {
            if (nameTemp == "noname" && ageTemp == 0) {
                check = false;
            }
            else {
                for (int i = 0; i < names.size(); i++) {
                    if (names[i] == nameTemp) {
                        cout << "This name already exists " << nameTemp << endl;
                        names[i].erase();
                    }
                }
                names.push_back(nameTemp);
                scores.push_back(ageTemp);
            }
        }
        else {
            error("Bad input");
        }
    }

    cout << "Enter a name to look for\n";
    cin >> nameInput;

    for (int i = 0; i < names.size(); i++) {
        if (names[i] == nameInput) {
            cout << "You entered: " << nameInput << ". Corresponded score is " << scores[i] << "\n";
            nameCheck++;
        }
    }

    if (nameCheck == 0) {
        cout << nameInput << " . Could not be found in the list of names.\n";
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