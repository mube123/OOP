#include<iostream>
#include<string>
using namespace std;
charges(int day, double rate, double charge, double service)
{
	double bill;
	bill= (day*rate)+(charge+service);
	return bill;
}
charges(double service, double charge)
{
	double bill;
	bill= charge+service;
	return bill;
}
int main()
{ 
	int category;
	
	cout<<"Enter patients category 1 for in-patient and 2 for out-patient: ";
	cin>>category;
	switch(category)
	{
		case 1:
			{
				int day;
				double rate, charge, service;
				cout<<"Enter the days stayed in the hospital: ";
				cin>>day;
				cout<<"Enter the rate per day: ";
				cin>>rate;
				cout<<"Enter your hospital medical charges: ";
				cin>>charge;
				cout<<"Enter the lum sum charegs of hospital services(i.e lab tests etc) : ";
				cin>>service;
				cout<<charges(day,rate,charge,service );
				break;
			}
		case 2:
			{
				double rate, charge, service;
				cout<<"Enter the lum sum charegs of hospital services(i.e lab tests etc) : ";
				cin>>service;
				cout<<"Enter your hospital medical charges: ";
				cin>>charge;
				cout<<charges(service,charge);
				break;
			}
	}
	
}
