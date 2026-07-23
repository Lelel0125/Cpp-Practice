#include <iostream>

using namespace std;

int main(){

    string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // cout << students[0] << '\n';
    // cout << students[1] << '\n';
    // cout << students[2] << '\n';

    for (int i = 0; i < sizeof(students)/sizeof(string); i++){
        cout << students[i] << endl;
    }

    for (int j = 0; j < sizeof(grades)/sizeof(char); j++){
        cout << grades[j] << endl;
    }

    return 0;
}