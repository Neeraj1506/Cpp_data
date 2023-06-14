
/******************************************************************************\
*           Copyright (C) 1999 Spectross Digital System (P) Ltd.
*                           All Rights Reserved
*------------------------------------------------------------------------------
* SPECTROSS DIGITAL SYSTEMS PVT. LTD,
* 4,SIRI FORT ROAD,
* NEW DELHI-110049,
* INDIA.
*
* www.spectross.com
* support@spectross.com
* Ph - 91-11-26264077.
*------------------------------------------------------------------------------
* MODULE NAME... C++ TRAINING
* FILENAME...... virtual.cpp
* DATE CREATED.. 09-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 10-09-22		Description:    Demo of Virtual Functions
*   MODIFIED:   	Rev	Author	Date 		        Description :   
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2.
*						3. 
*						4  
*						5. 
*\******************************************************************************/
/*
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    string m_name;

    Animal(const string& name)
        : m_name{ name }
    {
    }

public:
    const string& getName() const { return m_name; }
    virtual string speak() const { return "???"; }                              //Virtual 
};
////////////////////////////////////////////////
class Cat: public Animal
{
public:
    Cat(const string& name)
        : Animal{ name }
    {
    }

    virtual string speak() const { return "Meow"; }                             // Virtual 
};
/////////////////////////////////////////////////
class Dog: public Animal
{
public:
    Dog(const string& name)
        : Animal{ name }
    {
    }

    virtual string speak() const { return "Woof"; }                   // Virtual 
};

//////////////////////////////////////////////////

void report(const Animal& animal)
{
    cout << animal.getName() << " says " << animal.speak() << '\n';
}

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	09-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
/*
int main()
{
    Cat cat{ "Fred" };
    Dog dog{ "Garbo" };

    report(cat);
    report(dog);

    return 0;
}

*/
/////////////////////////////////////       Object Slicing           ///////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;


class A
{
public:
    virtual string getName() const { return "A"; }
};

class B: public A
{
public:
    // note: no virtual keyword in B, C, and D
    string getName() const { return "B"; }
};

class C: public B
{
public:
    string getName() const { return "C"; }
};

class D: public C
{
public:
    string getName() const { return "D"; }
};

int main()
{
    D c;
    A& rBase { c }; // note: rBase is a B this time
    cout << rBase.getName() << '\n';

    return 0;
}
