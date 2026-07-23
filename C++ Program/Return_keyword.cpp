#include <iostream>

using namespace std;

double square(double length);
double cube(double length);

string concatStrings(string string1, string string2);

int main(){

    // return = return a value back to the spot
    //          where you called the encompassing function

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    cout << "Area: " << area << "cm^2" << endl;
    cout << "Volume: " << volume << "cm^3" << endl;

//---------------------------------------------------------------------------

    string firstName = "Le";
    string lastName = "Le";
    string fullName = concatStrings(firstName, lastName);

    cout << "Hello " << fullName;

    return 0;
}

double square(double length){
    // double result = length * length;
    // return result;

    return length * length;
}

double cube(double length){
    // double result = length * length * length;
    // return result;

    return length * length * length;
}

string concatStrings(string string1, string string2){
    return string1 + " " + string2;
}