#include "../std_lib_facilities.h"

vector<string> nouns;
vector<string> verbs;
vector<string> conjuctions;

void init() {
    nouns.push_back("birds");
    nouns.push_back("fish");
    nouns.push_back("C++");

    verbs.push_back("rules");
    verbs.push_back("fly");
    verbs.push_back("swim");

    conjuctions.push_back("and");
    conjuctions.push_back("or");
    conjuctions.push_back("but");
}

bool is_noun(string w) {
    for (int i = 0; i < nouns.size(); i++)
    {
        if (w==nouns[i]) return true;
    }
    return false;
}

bool is_verb(string w) {
    for (int i = 0; i < verbs.size(); i++)
    {
        if (w==verbs[i]) return true;
    }
    return false;
}

bool is_conj(string w) {
    for (int i = 0; i < conjuctions.size(); i++)
    {
        if (w==conjuctions[i]) return true;
    }
    return false;
};

bool sentence()
{
    string w;
    cin >> w;
    if (!is_noun(w)) return false;

    string w2;
    cin >> w2;
    if (!is_verb(w2)) return false;

    string w3;
    cin >> w3;
    if (w3 == ".") return true;	// end of sentence
    if (!is_conj(w3)) return false;	// not end of sentence and not conjunction
    return sentence();	// look for another sentence
}

int main() {
    try {
        cout << "enter a number to check. '.' to terminate" << endl;
        init();
        while (cin) {
            bool b = sentence();

            if (b) cout << "OK\n";
            else cout << "NOT OK\n";

            cout << "Try again: ";
        }
        keep_window_open();
    }
    catch (exception& e) {
        cout << e.what() << endl;
        keep_window_open();
    }
    catch (...) {
        runtime_error("runtime error, terminating");
        keep_window_open();
    }
}