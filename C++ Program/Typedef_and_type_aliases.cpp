#include <iostream>
#include <vector>

using namespace std;

// typedef vector<pair<string, int>> pairlist_t;
// typedef string text_t;
// typedef int number_t;

using text_t = string;
using number_t = int;

int main(){

    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type
    //           New identifier for an existing type
    //           Helps with readability and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (work better w/ templates)

    text_t firstName = "Bro";
    number_t age = 21;

    cout << firstName << endl;
    cout << age << endl;

    return 0;
}