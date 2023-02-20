#include<iostream>
#include <cstdlib> // Needed for abs()
using namespace std;
void simplify();

class FeetInches
{
	private:
		int feet;  // To hold a number of feet
		int inches;  // To hold a number of inches
	
	public:
		void simplify()
		{
			//**************************************************************
			// Definition of member function simplify. This function *
			// checks for values in the inches member greater than *
			// twelve or less than zero. If such a value is found, *
			// the numbers in feet and inches are adjusted to conform *
			// to a standard feet & inches expression. For example, *
			// 3 feet 14 inches would be adjusted to 4 feet 2 inches and *
			// 5 feet -2 inches would be adjusted to 4 feet 10 inches. *
			//**************************************************************
		
			if (inches >= 12)
 			{
 				feet += (inches / 12);
 				inches = inches % 12;
 				cout<<"Feet= "<<feet<<endl;
 				cout<<"Inches= "<<inches;
 			}
 			else if (inches < 0)
 			{
 				feet -= ((abs(inches) / 12) + 1);
 				inches = 12 - (abs(inches) % 12);
 				cout<<"Feet= "<<feet<<endl;
 				cout<<"Inches= "<<inches;
 			}
 			
 			
 			
		}
	
	
		// Constructor
 	FeetInches(int f = 0, int i = 0)
 	{ 
 		feet = f;
 		inches = i;
 		simplify(); 
 	}
 	// Mutator functions
 	void setFeet(int f)
 	{ 
 		feet = f; 
 	}

	void setInches(int i)
	{ 
		inches = i;
 		simplify(); 
	}
	// Accessor functions
	int getFeet() 
	{
		return feet;
	}
	
	int getInches() 
	{
		return inches;
	}

};

int main()
{
	FeetInches f1;
	f1.setFeet(3);
	f1.setInches(14);
	f1.getFeet();
	f1.getInches();
//	f1.simplify();
	
	cout<<endl;
	FeetInches f2;
	f2.setFeet(5);
	f2.setInches(-2);
	f2.getFeet();
	f2.getInches();
	f2.simplify();
	
	cout<<endl;
	FeetInches f3;
	f3.setFeet(5);
	f3.setInches(-24);
	f3.getFeet();
	f3.getInches();
	f3.simplify();
	
	
	
}
