#include <iostream>

using namespace std;

int main(){
    
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade = 75;
    grade >= 60 ? cout << "You pass!" << endl : cout << "You fail!" << endl;

    /// if (grade >= 60){
    ///     cout << "You pass!";
    /// }
    /// else{
    ///     cout << "You fail!";
    /// }

    int number = 8;
    number % 2 == 1 ? cout << "ODD" << endl : cout << "EVEN" << endl;

    bool hungry = true;
    // hungry ? cout << "You are hungry" : cout << "You are full";
    cout << (hungry ? "You are hungry\n" : "You are full\n");

    return 0;
}