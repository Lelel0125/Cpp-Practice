#include <iostream>

using namespace std;

int main(){

    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)

    // string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    const int size = 99;
    string foods[size];

    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (size/3) * 2, "hamburger");
    fill(foods + (size/3)*2, foods + size, "hotdogs");

    for (string food : foods){
        cout << food << endl;
    }

    return 0;
}