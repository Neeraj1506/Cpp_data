
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
* FILENAME...... friend.c
* DATE CREATED.. 07-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 07-09-22		Description:    Demo of friend member function
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

class For{
    public:
        int org_value = 0;
        int get_value{0};

    public:
        For(int check_value){
            get_value = check_value;
            
        }
        friend int compare(For& ko);
};
int compare(For& ko){
    if(ko.org_value == ko.get_value){
        cout << "Same" << endl;
        return 1;
    }
    else {
        cout << "Not Same " << endl;
        return 0;
    }
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
int main(int argc, char* argv[]){
    For ok{7};
    cout << compare(ok) << endl;

    return 0;

}