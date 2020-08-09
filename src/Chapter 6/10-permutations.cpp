#include "../std_lib_facilities.h"

unsigned int factorial(int n){
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}

int permutate(int a, int b){
    return factorial(a)/factorial((a-b));
}

int combinate(int a, int b){
    return permutate(a,b)/factorial(b);
}

int main() {
    int n = 0, r = 0;
    char ch;
    cout << "Welcum to muh kalkulator v6.9\n";
    while(true){
        cout << "'1' for permutation, '2' for combination\n";
        cin>>ch;
        cout << "n and r\n";
        cin>>n>>r;
        if(n < 1){
            cout << "a can't be negative!, type n again\n";
            cin >> n;
        }
        if(r < 1 || r > 9){
            cout << "r must be between 0-10!, type b again\n";
            cin >> r;
        }
        switch (ch) {
            case '1':
                cout << "PERMUTATION: " << permutate(n, r) << endl;
                break;
            case '2':
                cout << "COMBINATION: " << combinate(n, r) << endl;
                break;
            default:
                cout << "error!\n";
                break;
        }
        
        
        
    }
    keep_window_open();
}