
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
* FILENAME...... io.c
* DATE CREATED.. 07-09-22
* PROJECT....... C++ TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 07-09-22		Description:    Demo of input/output Overloading
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

class Point
{
private:
    double m_x{};
    double m_y{};
    double m_z{};

public:
    Point(double x=0.0, double y=0.0, double z=0.0)
      : m_x{x}, m_y{y}, m_z{z}
    {
    }

    friend ostream& operator<< (ostream& out, const Point& point);
    friend istream& operator>> (istream& in, Point& point);
};

ostream& operator<< (std::ostream& out, const Point& point)
{
   
    out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ')';

    return out;
}

istream& operator>> (istream& in, Point& point){
    in >> point.m_x;
    in >> point.m_y;
    in >> point.m_z;

    return in;
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
    Point point1{2.0, 3.5, 4.0};
    Point point2{6.0, 7.5, 8.0};
    Point point3;
    cout << point1 << "\n" << point2 << '\n';

    cout << "Eneter Points" <<endl;
    cin >> point3;
    cout << "Your Enetered Points" << point3 << endl;
    return 0;
}