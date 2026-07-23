#include <iostream>

using namespace std;

void printNum();

int myNum = 3;

int main(){

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNum = 1;

    cout << ::myNum << '\n'; //::myNum -> global variable
    printNum();

    return 0;
}

void printNum(){
    int myNum = 2;
    cout << myNum << '\n';
}