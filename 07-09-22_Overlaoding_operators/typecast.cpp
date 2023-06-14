// CPP Program to demonstrate Conversion Operators
#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imag;

public:
	// Default constructor
	Complex(double r = 0.0, double i = 0.0)
		: real(r)
		, imag(i)
	{
	}
    double fun() { 
        cout << "in fun"<< endl;
        return getMag(); }
	// magnitude : usual function style
	double mag() { 
        cout << "in Mag"<< endl;
        return getMag(); }

	// magnitude : conversion operator
	operator double() { 
        cout << "in double "<< endl;
        return getMag(); }

private:
	// class helper to get magnitude
	double getMag()
	{
        cout << "get mag"<< endl;
		return sqrt(real * real + imag * imag);
	}
};

int main()
{
	// a Complex object
	Complex com(3.0, 4.0);

	// print magnitude
	cout << com.mag() << endl;
	// same can be done like this
	cout << com << endl;
    cout << com.fun() << endl;
    cout << com( 4.0 , 5.0 ) << endl;
}
