// DynamicMemoryAllocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DynamicMemoryAllocation.h"

using namespace std;

//Constructor
MyClass::MyClass()
{
}

//Destructor
MyClass::~MyClass()
{
}



int main()
{
    cout << "Hello World!\n";

    int* NewNum = new int(5);


    *NewNum += 5;

    cout << *NewNum;

    delete NewNum;

    cout << "";
    
    return 0;
}




