
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
* FILENAME...... class_objects.c
* DATE CREATED.. 06-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 06-09-22		Description:    Demo of a Class
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
#include <vector>

using namespace std;

class Student{
    
        int roll = 0;
        int marks{};
        string name {};
        vector<int>mobile{};

    public:
        void add(int num, int num2, int num3, int num4){
            
            mobile.push_back(num);
            mobile.push_back(num2);

            mobile.push_back(num3);
            mobile.push_back(num4);

            cout << "Mobile no ";
            for(int i: mobile){
            cout << i << " ";
            }
        }
        void set(int r, int m, string n){
            roll = r;
            marks = m;
            name = n;
        }

        void print(){

            cout << "\n Roll no. "<< roll << "\n marks are "
            << marks << "\n Name of the student is " << name << endl;   
        }
};

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	06-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main()
int main(int argc, char* argv[]){
   // Student juli { 1, 99, "juli" };
   // juli.s_name = "Juli Shah";
   // Student mohit { 2, 39, "Mohit Sharma"};
    
   // juli.print();
   // mohit.print();

    Student one, two;
    one.set(2, 97, "Juli");
    two.set(3, 88, "Mohit");

    one.print();
    two.print();
    

   // juli.add(1,2,3,4);
   // mohit.add(9,7,8,5);
    
    
    return 0;
}