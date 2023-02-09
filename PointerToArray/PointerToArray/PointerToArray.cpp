// PointerToArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
A variable is created of struct type, create a pointerand print to itand use the pointer to take input
and display output
*/ 

#include <iostream>
#include <string> // include this for using string
using namespace std;

struct Person {

    string name;
    int age;
    double salary;
};

int main()
{
    Person p1;

    cout << "enter details of person as name, age and salary" << endl;
//    cin >> p1.name;
//    cin >> p1.age;
//    cin >> p1.salary;

//   cout << "Details of person are as follows:" << endl;
//    cout << "name:" << p1.name << endl;
//   cout << "age:" << p1.age << endl;
//  cout << "salary:" << p1.salary << endl;

    Person *ptr = &p1;

    cin >> ptr->name;
    cin >> ptr->age;
    cin >> ptr->salary;


    cout << "Details of person are as follows:" << endl;
    cout << "name:" << ptr->name <<endl;
    cout << "age:" << ptr->age << endl;
    cout << "salary:" << ptr->salary << endl;

    ptr = &p2;

    return 0;
}