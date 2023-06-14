
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
* FILENAME...... cpy_member.c
* DATE CREATED.. 07-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 07-09-22		Description:    Demo of Arithmetic Overloading
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
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

class Cents
{
private:
	int m_cents {};

public:
	Cents(int cents) : m_cents{ cents } { }

	Cents(const Cents& obj): m_cents{obj.m_cents}{
		cout << "This is Copy Constructor Made By Me \n"<< obj.getCents() << endl;
	}

	
	friend Cents operator+(const Cents& c1, const Cents& c2);

	int getCents() const { return m_cents; }
};

// this function is not a member function!
Cents operator+(const Cents& c1, const Cents& c2)
{
    cout << "debug,,,"<< endl;
	return Cents{c1.m_cents - c2.m_cents};
}

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	07-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{
	Cents cents1{ 6 };
	Cents cents2{ 8 };
	Cents cents3 = cents2;											//By default copy constructor..
	cout << cents3.getCents() << " By Default ok" <<endl;

	Cents cents4{cents3};											//Using A Special Copy Constructor

	cout << sizeof(cents1) << "Size.." << endl;
    //Cents centsSum{ 6 + 8 };
    Cents centsSum{ cents1 + cents2 };
	std::cout << "I have " << centsSum.getCents() << " cents.\n";

	return 0;
}

