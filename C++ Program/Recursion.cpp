#include <iostream>

using namespace std;

void walk(int steps);
int factorial(int num);

int main(){

    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    //disadvantages = uses more memory
    //                slower

    walk(10);

    cout << factorial(10);

    return 0;
}

void walk(int steps){
    // for (int i = 0; i < steps; i++){
    //     cout << "You take a step!" << endl;
    // }

    if (steps > 0){
        cout << "You take a step!" << endl;
        walk(steps - 1);
    }
}

int factorial(int num){
    // int result = 1;
    // for (int i = 1; i <= num; i++){
    //     result = result * i;
    // }
    // return result;

    if (num > 1){
        return num * factorial(num - 1);
    }
    else {
        return 1;
    }
}