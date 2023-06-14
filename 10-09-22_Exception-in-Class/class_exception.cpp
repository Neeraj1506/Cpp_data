
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
* FILENAME...... class_exception.cpp
* DATE CREATED.. 10-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 10-09-22		Description:    Demo of Exception used inside the class
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
#include <string>
using namespace std;

class ArrayException                               // class for specially error message cath exception
{
private:
	string m_error;

public:
	ArrayException(string error)
		: m_error{ error }
	{
	}

	const string& getError() const { return m_error; }
};

class IntArray
{
private:
	int m_data[5]{11,12,21,23,14}; 

public:
	IntArray() {}

	int getLength() const { return 5; }

	int& operator[](const int index)
	{
		if (index < 0 || index >= getLength())
			throw ArrayException{ "Invalid index, Error" };

		return m_data[index];
	}

};

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	10-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{
    int index0 = 0;
    int data = 0;

    cout << "Enter Index No. You Want To See \n";
    cin >> index0;
    
	IntArray array;

	try
	{
		data = array[index0] ; 
        cout << "Your Value Is :" << data << endl; 
	}
	catch (const ArrayException& exception)
	{
		cerr << "An array exception occurred (" << exception.getError() << ")\n";
	}
}