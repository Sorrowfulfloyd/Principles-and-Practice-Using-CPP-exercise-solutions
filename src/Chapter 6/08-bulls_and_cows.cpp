#include <iostream>
#include <vector>
using namespace std;
vector<string> guesses;
vector<string> strings {"a","b","c","d"};
int main() {
    int bull = 0;
    int cow = 0;
    bool success = false;
    while(!success){ 
        for(int i = 0; guesses.size() < 4;) {
            string digit;
            cin >> digit;
            guesses.push_back(digit);   
        }
        for(int i; i < guesses.size(); i++){
            for(int j = 0; j < strings.size(); j++){
                if(guesses[i] == strings[j] && i == j) bull++;
                if(guesses[i] == strings[j] && i != j) cow++;
                continue;
            }
        continue;
        }
        if (guesses.size() == 4) break;
    }
    if (bull == 4) cout << "We won zulul\n";
    else cout << "DETH, REBORN?\n";
    cout << bull << " bulls " << cow << " cows.\n";
    system("pause");
}