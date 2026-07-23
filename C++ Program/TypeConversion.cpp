#include <iostream> 

using namespace std;

int main(){

    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)

    // double x = (int) 3.14;
    // char x = 100; ## show 'd'
    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    cout << score << "%";

    return 0;
}