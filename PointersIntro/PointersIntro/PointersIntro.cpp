// PointersIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
-A pointer is a variable whose value is the address of another variable.
-Pointers allow you to refer to the same space in memory from multiple locations. This means that you can update
memory in one location and the change can be seen from another location in your program. You will also save space 
by being able to share components in your data structure.
-Dynamic menmory allocation
*/
int main()
{
    int var = 5;

    //datatype pointername*;

    int *ip;     //Pointer to an integer
    double *dp;  //Pointerto a double
    float *fp;   //Pointer to a float
    char* ch;     //Pointer to a character

    ip = &var;

    cout << "variable value" << var << endl;
    cout << "Address in pointer" << ip << endl;
    cout << "pointer pointing to value:" << *ip << endl;

    //changed value to 6 using pointer adressw remains the same, but value different
    *ip = 6;

    cout << endl;
    cout << "variable value" << var << endl;
    cout << "Address in pointer" << ip << endl;
    cout << "pointer pointing to value:" << *ip << endl;

    return 0;
}


