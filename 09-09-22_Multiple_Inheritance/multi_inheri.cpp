
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
* FILENAME...... multi_inheri.cpp
* DATE CREATED.. 09-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 09-09-22		Description:    Demo of Multi Inheritance
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

class Mother{
    string m_name{};
    public:
        Mother(string mname): m_name{mname}{
            cout <<" getting Mother's name" <<endl;
        }
        string getmname(){ return m_name;}
};

class Father{
    string f_name{};
    int f_age{};

    public:
        Father(string fname, int fage): f_name{fname}, f_age{fage}{
            cout <<" getting Father's name" <<endl;
        }

        int getfage()const { return f_age;}
        string getfname(){ return f_name;}
};

class Student: public Mother, public Father{
    string s_name{};
    int s_age{};
    public:
        Student(string sname, int sage, string fname, int fage, string mname): s_name{sname}, s_age{sage},
            Father{fname, fage}, Mother{mname}{
            cout <<" getting details" <<endl;
        }  
        int getsage(){ return s_age;}  
        string getsname(){ return s_name;}    
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
int main(int argc, char* argv[]){
    Student nitesh{"Nitesh", 22, "MohanDas", 55, "Kamla"};
    
    cout << "\n\n Name of student is = " << nitesh.getsname() << endl;
    cout << " Age of Student = " << nitesh.getsage() << endl;
    cout << " Name of Father = " << nitesh.getfname() << endl;
    cout << " Father's Age = " << nitesh.getfage() << endl;
    cout << " Name of Mother = " << nitesh.getmname()<< endl;

    return 0;
}