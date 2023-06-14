
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
* FILENAME...... exception.cpp
* DATE CREATED.. 09-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 10-09-22		Description:    Demo of exception
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

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	09-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{

    try
    {
        throw 'c'; 
        cout << "hello"; // it never prints

    }
    catch (int x)
    {
      
        cerr << "We caught an int exception with value: " << x << '\n';
    }
    // catch (char c)
    // {
      
    //     cerr << "We caught an char exception with value: " << c << '\n';
    // }
    catch (double d) 
    {
        
        cerr << "We caught an exception of type double" << d <<'\n';
    }
    catch (const char *str)
    {
        
        cerr << "We caught an exception of type string with = " << str <<'\n';
    }
      catch (...)
    {
      
        cerr << "We caught  all type of error " << '\n';
    }

    cout << "Continuing ... \n";

    return 0;
}


///////////////////      Stack Unwinding      /////////////////////////

/*
#include <iostream>

void last() // called by third()
{
    std::cout << "Start last\n";
    std::cout << "last throwing int exception\n";

    throw -1;

    std::cout << "End last\n";
}

void third() // called by second()
{
    std::cout << "Start third\n";
    last();
    std::cout << "End third\n";
}

void second() // called by first()
{
    std::cout << "Start second\n";
    try
    {
        third();
    }
    catch (double)
    {
         std::cerr << "second caught double exception\n";
    }
    std::cout << "End second\n";
}

void first() // called by main()
{
    std::cout << "Start first\n";
    try
    {
        second();
    }
    catch (int)
    {
         std::cerr << "first caught int exception\n";
    }
    catch (double)
    {
         std::cerr << "first caught double exception\n";
    }
    std::cout << "End first\n";
}

int main()
{
    std::cout << "Start main\n";
    try
    {
        first();
    }
    catch (int)
    {
         std::cerr << "main caught int exception\n";
    }
    std::cout << "End main\n";

    return 0;
}
*/

