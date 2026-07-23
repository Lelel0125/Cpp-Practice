#include <iostream>

using namespace std;

int main(){

    // for (int i = 1; i <= 3; i++){
    //     for (int j = 1; j <= 10; j++){
    //     cout << j << " ";
    //     }
    //     cout << endl;
    // }

    int rows;
    int columns;
    char symbol;

    cout << "How many rows?: ";
    cin >> rows;

    cout << "How many columns?: ";
    cin >> columns;

    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}