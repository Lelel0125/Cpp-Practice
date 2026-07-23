#include <iostream>

using namespace std;

class Human{
    public:
        string name;
        string occupation;
        int age;

        void eat(){
            cout << "This person is eating\n";
        }

        void drink(){
            cout << "This person is drinking\n";
        }

        void sleep(){
            cout << "This person is sleeping\n";
        }
};

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate(){
            cout << "You step on the gas!\n";
        }

        void brake(){
            cout << "You step on the brakes!\n";
        }
};

int main(){

    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items(ex. Phone, Book, Dog)
    //          Created from a class which acts as a "blue-print"

    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.occupation = "student";
    human2.age = 15;

    // cout << human1.name << endl;
    // cout << human1.occupation << endl;
    // cout << human1.age << endl;

    // human1.eat();
    // human1.drink();
    // human1.sleep();

    // cout << human2.name << endl;
    // cout << human2.occupation << endl;
    // cout << human2.age << endl;

    // human2.eat();
    // human2.drink();
    // human2.sleep();



    Car car1;
    Car car2;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    car2.make = "Toyota";
    car2.model = "RAV4";
    car2.year = 2023;
    car2.color = "black";

    cout << car1.make << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    cout << car1.color << endl;

    car1.accelerate();
    car1.brake();

    cout << car2.make << endl;
    cout << car2.model << endl;
    cout << car2.year << endl;
    cout << car2.color << endl;

    car2.accelerate();
    car2.brake();

    return 0;
}