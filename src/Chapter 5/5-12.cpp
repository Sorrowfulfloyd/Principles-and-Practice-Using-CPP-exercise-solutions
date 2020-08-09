// Implement a little guessing game called (for some obscure reason) “Bulls and Cows.” The program has a vector of four
// different integers in the range 0 to 9 (e.g., 1234 but not 1122) and it is the user’s task to discover those numbers by
// repeated guesses. Say the number to be guessed is 1234 and the user guesses 1359; the response should be “1 bull and 1
// cow” because the user got one digit (1) right and in the right position (a bull) and one digit (3) right but in the wrong
// position (a cow). The guessing continues until the user gets four bulls, that is, has the four digits correct and in the correct
// order.

#include <iostream>
#include <vector>
using namespace std;
vector<int> guesses;
vector<int> numbers {1, 2, 3, 4};
int main() {
    int bull = 0;
    int cow = 0;
    bool success = false;
    while(!success){
        cout << bull << " bull and " << cow << " cow so far.\n"; 
        for(int digit = 0; guesses.size() < 4;) {
            cin >> digit;
            if(digit <= 0 || digit > 9) cout << "so ur a bad boy?\n";
            guesses.push_back(digit);   
        }
        for(int i; i < guesses.size(); i++){
            for(int j = 0; j < numbers.size(); j++){
                if(guesses[i] == numbers[j] && i == j) bull++; cout << bull;
                if(guesses[i] == numbers[j] && i != j) cow++; cout <<" "<<cow<<endl;
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