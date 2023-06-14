
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
* FILENAME...... ref_point.cpp
* DATE CREATED.. 09-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 09-09-22		Description:    Demo of Reference & Pointers
*   MODIFIED:   	Rev	Author	Date 		        Description :   
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
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
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2.
*						3. 
*						4  
*						5. 
*\******************************************************************************/
#include <array>
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string m_name;

    Animal(string name)
        : m_name{ name }
    {
    }

    Animal(const Animal&) = default;
    Animal& operator=(const Animal&) = default;

public:
    string getName() const { return m_name; }
    string speak() const { return "???"; }
};

class Cat: public Animal
{
public:
    Cat(string name)
        : Animal{ name }
    {
    }

    string speak() const { return "Meow"; }
};

class Dog: public Animal
{
public:
    Dog(string name)
        : Animal{ name }
    {
    }

    string speak() const { return "Woof"; }
};

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	09-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main()
{
    const Cat cat{ "Fred" };
    cout << "cat is named " << cat.getName() << ", and it says " << cat.speak() << '\n';

    const Dog dog{ "Garbo" };
    cout << "dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';

    const Animal* pAnimal{ &dog };
    cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

    const Dog* pcat{ &dog };
    cout << "pAnimal is named " << pcat->getName() << ", and it says " << pcat->speak() << '\n';

    pAnimal = &dog;
    cerr << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';


// many objects ... 
/*
    const Cat fred{ "kily" };
    const Cat misty{ "Misty" };
    const Cat zeke{ "Zoe" };

    const Dog garbo{ "Gareebo" };
    const Dog pooky{ "Doon" };
    const Dog truffle{ "Toy" };

    array<const Animal*, 6> animals{&fred, &garbo, &misty, &pooky, &truffle, &zeke };           // make an array of objects and using pointers access them

    for (auto animal : animals)
    {
        cout << animal->getName() << " says " << animal->speak() << '\n';
    }

*/
    return 0;
}