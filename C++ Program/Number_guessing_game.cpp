#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));

    num = (rand() % 100) + 1;
    tries = 0;

    cout << "****** NUMBER GUESSING GAME ******\n";

    do{
        cout << "Enter a guess between (1-100): ";
        cin >> guess;

        tries++;

        if (guess < num){
            cout << "Too low!\n";
        }
        else if (guess > num){
            cout << "Too high!\n";
        }
        else{
            cout << "Correct! # of tries: " << tries << endl;
        }

    }while (guess != num);

    // cout <<"You win! You try " << tries << " times";
    cout << "**********************************" << endl;

    return 0;
}