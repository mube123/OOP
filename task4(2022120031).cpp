#include<iostream>
using namespace std;
class Sale
{
	double itemCost;
	double taxRate;

public:
	Sale()
	{
		itemCost=5.0;
		taxRate=0.02;
	}
	
	double setitemCost(double n1) //Setters/Mutators
	{
		itemCost = n1;
	}
	double settaxRate(double n2)
	{
		taxRate = n2;
	}
	double displayAll()
	{
		cout << itemCost << endl << taxRate << endl;
	}
	double getitemCost() //Getters/Accessor
	{
		return itemCost;
	}
	double gettaxRate()
	{
		return taxRate;
	}
	double itemTax()
	{
		return (itemCost*taxRate)/100;
	}
	double itemTotalCost()
	{
		return itemCost+itemTax();
	}
};

int main()
		{

			system("pause");
			Sale obj;
			obj.displayAll();
			obj.setitemCost(200);
			obj.settaxRate(10);
			obj.displayAll();
			obj.getitemCost();
			obj.gettaxRate();
			cout<<"itemTax ="<<obj.itemTax()<<endl;
			cout<<"itemTotalCost = "<<obj.itemTotalCost();
			

		}
