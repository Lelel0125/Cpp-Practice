#include <iostream>

using namespace std;

int main(){

    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    int grades[] = {65, 72, 81, 93};

    // for (int i =  0; i < sizeof(students)/sizeof(students[0]); i++){
    //     cout << students[i] << endl;
    // }

    for (string student : students){
        cout << student << endl;
    }

    for (int grade : grades){
        cout << grade << endl;
    }


    return 0;
}