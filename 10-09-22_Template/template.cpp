
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
* FILENAME...... template.cpp
* DATE CREATED.. 09-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 09-09-22		Description:    Demo of template with function parameter and class
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

template <typename T, int size> class MakeArray{
    private:
        T array[size]{};

    public:
        T additem(MakeArray& chararray);
        T display(MakeArray& chararray);


};
template <typename T, int size> 
T MakeArray<T, size> :: additem(MakeArray& chararray){
    int count{};
    cout << "Enter Character One By One: " << endl;
    for(count; count < size; count++){
        cin >> chararray.array[count];
    }
    return 0;
}
template <typename T, int size> 
T MakeArray<T, size> :: display(MakeArray& chararray){
    int count{};

    for(count; count < size; count++){
        cout << chararray.array[count];
    } 
    return 0;
}

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	09-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(){
    // int s = 0;
    // cout << "Enter Size Of Array: \n" ;
    // cin >> s;
    MakeArray<char, 5> chararray;
    chararray.additem(chararray);
    chararray.display(chararray);



}

