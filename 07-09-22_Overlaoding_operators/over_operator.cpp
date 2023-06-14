
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
* FILENAME...... over_operator.c
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
using namespace std;

class Cents
{
private:
	int m_cents {};

public:
	Cents(int cents) : m_cents{ cents } { }


	friend Cents operator+(const Cents& c1, const Cents& c2);
	friend bool operator<(const Cents& c1, const Cents& c2);
	
	Cents operator-(int value);

	int getCents() const { return m_cents; }
};


Cents operator+(const Cents& c1, const Cents& c2)
{
	
	return Cents{c1.m_cents - c2.m_cents};
}


Cents Cents::operator-(int value)
{

	return Cents(m_cents + value);
}

bool operator<(const Cents& c1, const Cents& c2){
	return (c1.m_cents < c2.m_cents);

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
int main()
{
	Cents cents1{ 6 };
	Cents cents2{ 8 };
	Cents centsSum{ cents1 + cents2 };
	Cents centsub {centsSum - 1};
	Cents sentcomp{cents1 < cents2};
	cout << "I have " << centsSum.getCents() << " cents.\n";
	cout << "I have " << centsub.getCents() << " cents.\n";
	if(cents1 < cents2)
		cout <<  "ok" << endl;
	else 
		cout << "not Ok" << endl;

	//Cents minimum = min(cents1, cents2);
	//cout << "minimum is " << minimum << endl;

	return 0;
}

/*template <typename O>
O min(const O& c1, const O& c2){
	return (c1 < c2)? c1:c2;
}
*/