#include<iostream>
using namespace std;
class Rectangle
{

	double width;
	double length;

public:

	Rectangle()
	{
		width = 0.0;
		length = 0.0;
	}
	
	double setwidth(double n1) //Setters/Mutators
	{

		width = n1;

	}
	double setlength(double n2)
	{

		length = n2;

	}

	double displayAll()
	{

		cout << width << endl << length << endl;

	}
	double getwidth() //Getters/Accessor
	{

		return width;

	}
	double getlength()
	{

		return length;

	}
	double area()
	{

		
		return width*length;

	}

};
		int main()
		{

			system("pause");
			Rectangle obj;
			obj.displayAll();
			obj.setwidth(3.4);
			obj.setlength(5.6);
			obj.displayAll();
			obj.getwidth();
			obj.getlength();
			cout<<obj.area();
			

		}
