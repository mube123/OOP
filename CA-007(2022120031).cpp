#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
	string name,department,position;
	int idNumber;
	 
public:
    Employee(string Name="", int idno=0,string dep="",string pos="")
    {
    	name=Name;
    	idNumber=idno;
    	department=dep;
    	position=pos;
    	
	}
	void setAll(string v1, int v2, string v3, string v4)
	{
		 v1= name;
		 v2= idNumber;
		 v3= department;
		 v4= position;
		 
	}
	void setName(string v1)
	{
	   	v1= name;
	}
	
	void setidNumber(int v2)
	{
	   	v2= idNumber;
	}
	
	void setDepartment(string v3)
	{
	   	v3= department;	   	
	}
	
	void setPosition(string v4)
	{
	   	v4= position;	   	
	}
	
	void displayAll()
	{
	   	cout<<name<<"\t\t"<<idNumber<<"\t\t"<<department<<"\t\t"<<position<<endl;
	}
	
	string getName()
	{
	   	return name;
	}
	
	int getidNumber()
	{
	   	return idNumber;
	}
	
	string getDepartment()
	{
	   	return department;
	}
	
	string getPosition()
	{
	   	return position;
	}
	
	   
	
	   
};

int main()
{
	Employee array[3]={{"Susan Meyers ",47899,"Accounting","Vice President"},
	{"Mark Johns",39119,"IT       ","Programmer",},{"Joy Roger",81774,"Manufacturing","Engineer"}};
	
	
	cout<<"________________________________________________________________________________"<<endl;
    cout <<"Name\t\t\tID Number\tDepartment\t\tPosition\t\t"<<endl;
    cout<<"________________________________________________________________________________"<<endl;
    
	array[0].displayAll();
	array[1].displayAll();
	array[2].displayAll();
	cout<<"________________________________________________________________________________"<<endl;
	return 0;	
}
	
	
	
	
