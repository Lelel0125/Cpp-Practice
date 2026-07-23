#include <iostream>

using namespace std;

int main(){

    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    string cars[] = {"Corvette", "Mustang", "Camry"};

    string cars[3];

    cars[0] = "Corvette";
    cars[1] = "Mustang";
    cars[2] = "Camaro";

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;


    double prices[] = {5.00, 7.50, 9.99, 15.00};

    cout << prices[0] << '\n';
    cout << prices[1] << '\n';
    cout << prices[2] << '\n';
    cout << prices[3] << '\n';

    return 0;
}