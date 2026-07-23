#include <iostream>
#include <ctime>

using namespace std;

int main(){

    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));    // Like get the data

    int num = (rand() % 6) + 1;

    cout << num << endl;

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}