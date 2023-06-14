
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
* FILENAME...... inherit.cpp
* DATE CREATED.. 08-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 08-09-22		Description:    Demo of Inheritance
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

class Student{
    public:
        int s_roll{1};
        int s_marks{};

        class Nested{
            public:
                int n_value{};
                int n_data{};
            Nested(){}
        };
        /*Student(){
            cout << "Base"<< endl;
        }*/
        friend ostream& operator<< (ostream& out, const Student& base){
            out << "this is Base \n" << base.s_marks << endl;
            return out;
        }
        
};

class Info : public Student{
    public:
        string s_name{};

        Info(string name, int r, int m):s_name{name}{
            s_roll = r;
            s_marks = m;
            cout << "Derived" << endl;
        }
        int getdetails(){ 
            cout << "Roll No. is " << s_roll << "\n" 
            << "Name Of the Student Is : " << s_name << "\n"
            << "And Marks " << s_marks << endl;
            return 0;
        } 
     
    //    int getdetails() = delete;

        friend ostream& operator<< (ostream& out, const Info& deri){
            out << "this is Derived..\n";
            out << static_cast<const Student&>(deri);
            return out;
        }
};

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	08-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{
    Info one{ "Neeraj", 2, 99};
    // one.s_roll = 2;
    // one.s_marks = 77;
    //one.getdetails();
    cout << one;
    one.getdetails();

    // Nested Section.
    Student :: Nested nest;
    nest.n_value = 5;
    nest.n_data = 100;
    cout << "Value in Nested class are " << nest.n_value << "& " << nest.n_data<< endl;
    
    return 0;
}



// Want to See pattern of Deconstructor in Inheritance



// class A
// {
// public:
//     A(int a)
//     {
//         std::cout << "A: " << a << '\n';
//     }
//     ~A(){
//         cout << "Destruct A"<< endl;
//     }
// };

// class B: public A
// {
// public:
//     B(int a, double b)
//     : A{ a }
//     {
//         std::cout << "B: " << b << '\n';
//     }
//     ~B(){
//         cout << "Destruct B"<< endl;
//     }
// };

// class C: public B
// {
// public:
//     C(int a, double b, char c)
//     : B{ a, b }
//     {
//         std::cout << "C: " << c << '\n';
//     }
//     ~C(){
//         cout << "Destruct C"<< endl;
//     }
// };

// int main()
// {
//     C c{ 5, 4.3, 'R' };

//     return 0;
// }