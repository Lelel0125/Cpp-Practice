#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        int age;
        double gpa;

    Student(string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    // Student(string x, int y, double z){
    //     name = x;
    //     age = y;
    //     gpa = z;
    // }
};

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

    Car(string make, string model, int year, string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main(){

    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 40, 1.5);
    Student student3("Sandy", 21, 4.0);

    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n';

    cout << student2.name << '\n';
    cout << student2.age << '\n';
    cout << student2.gpa << '\n';

    cout << student3.name << '\n';
    cout << student3.age << '\n';
    cout << student3.gpa << '\n';

///////////////////////////////////////////////////////////////////

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    cout << car1.make << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    cout << car1.color << endl;

    cout << car2.make << endl;
    cout << car2.model << endl;
    cout << car2.year << endl;
    cout << car2.color << endl;

    return 0;
}