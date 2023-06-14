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
* FILENAME...... constructor.c
* DATE CREATED.. 06-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 06-09-22		Description:    Demo of Construction
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
#include <iomanip>
#include "constructor.h"

using namespace std;


/*
class Change{
    private:
        int value1{};
        double value2{};

    public:
        Change (int num1 , double num2){
            value1 = num1;
            value2 = num2;
        }

        Change (double num){
            value2 = num;
        }
        
        Change() = default;

        Change(int n1, int n2): value1{n1}, value2{n2}{

       }

        int printv1() {return value1;}
        double printv2() {return value2;}
};
*/
/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	06-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
/*
int main(int argc, char* argv[]){
    Change task {34, 89.99980};
    cout << "Value becomes : \n" << task.printv1() << "\n" << fixed << task.printv2() << endl;

    Change task2 (12.90);
    cout << "Value becomes : \n" << task2.printv1() << "\n" << task2.printv2() << endl;

    Change task3{};
    cout << "Value becomes : \n" << task3.printv1() << "\n" << task3.printv2() << endl;

    Change task4{5, 8};
    cout << "Value becomes : \n" << task4.printv1() << "\n" << task4.printv2() << endl;

    return 0;
}*/





// changing constant values using Constructor
class Foo
{
private:
    const int m_value { 0 };

public:
    Foo()
    {
         // code to do some common setup tasks (e.g. open a file or database)
    }

    Foo(int value) : m_value { value } // we must initialize m_value since it's const
    {
        // how do we get to the common initialization code in Foo()?
    }
    ~Foo(){
        cout << "destructing..."<< endl;
    }
    int print() {return m_value;}

};
int main(){
    Foo A{2};
    cout << A.print() << endl;
}

/*
//Declaring Class Member Function Outside the Class

Change::Change(int num1, int num2){
    set(num1, num2);
}

int Change::set(int n1, int n2){
            value_one = n1;
            value_two = n2;
            return 0;
        }

int main(){
    Change ok(5, 6);
    cout << ok.print_one() << endl;
    cout << ok.print_two() << endl;

}
*/