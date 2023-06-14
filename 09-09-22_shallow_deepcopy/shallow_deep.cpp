// C++ program to implement the
// deep copy
#include <iostream>
using namespace std;

// Box Class
class box {
private:
	int length;
	int* breadth;
	int height;

public:
	// Constructor
	box()
	{
		cout <<" how" << endl;

		breadth = new int;
	}

	// Function to set the dimensions
	// of the Box
	void set_dimension(int len, int brea,
					int heig)
	{
		length = len;
		*breadth = brea;
		height = heig;
	}

	// Function to show the dimensions
	// of the Box
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << *breadth
			<< "\n Height = " << height
			<< endl;
	}

	// Parameterized Constructors for
	// for implementing deep copy
	box(box& sample)
	{
		cout <<" Hy" << endl;
		length = sample.length;
		breadth = new int;
		*breadth = *(sample.breadth);
		height = sample.height;
	}

	// Destructors
	~box()
	{
		delete breadth;
        cout<<"Deleted... breadth:"<<endl;
	}
};

// Driver Code
int main()
{
	// Object of class first
	box first;

	// Set the dimensions
	first.set_dimension(2, 4, 6);

	// Display the dimensions
	first.show_data();

	// When the data will be copied then
	// all the resources will also get
	// allocated to the new object4
	first.show_data();

	// cout << "Hello" << endl;
	// first.set_dimension(3,6,9);
	// first.show_data();

	return 0;
}
