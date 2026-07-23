#include <iostream>

using namespace std;

template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}

int main(){

    // function template = describe what a function looks like
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using different data types

    //                     Ex. "It's like a cookie-cutter..."
    //                     "Cookies are the same shape, but the dough use for cookies is different."

    cout << ::max(1, 2) << endl; // :: avoid same function name in cpp

    return 0;
}

// double max(double x, double y){
//     return (x > y) ? x : y;
// }

// char max(char x, char y){
//     return (x > y) ? x : y;
// }