#include <iostream>

using namespace std;

int main(){

    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.

    string name = "Pizza";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    string students[] = {"Spongebob", "Patrick", "Squidward"};

    cout << sizeof(grades) << " bytes\n";
    cout << sizeof(grades)/sizeof(char) << " elements\n";
    cout << sizeof(students)/sizeof(string) << " elements\n";

    return 0;
}