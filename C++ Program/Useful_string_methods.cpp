#include <iostream>

// Tutor : https://cplusplus.com/reference/string/string/?kw=string

using namespace std;

int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    /*
        name.length();
        name.empty();
        name.clear();
        name.append("@gmail.com");
        name.at(0);
        name.insert(0, "@");
        name.find('a');
        name.erase(0, 3);
    */
    

    if (name.length() > 12){
        cout << "Your name can't be over 12 character";
    }
    else{
        cout << "Welcome " << name;
    }


    if (name.empty()){
        cout << "You didn't enter your name";
    }
    else{
        cout << "Hello " << name;
    }


    name.clear();
    cout << "Hello " << name;


    name.append("@gmail.com");
    cout << "Your username is now " << name;


    cout << name.at(0);


    name.insert(0, "]");
    cout << name;


    cout << name.find(' ');


    name.erase(0, 3);
    cout << name;

    return 0;
}