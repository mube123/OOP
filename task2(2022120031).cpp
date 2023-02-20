#include<iostream>
using namespace std;

int a,b;
string c;
	
class inventory
{

int serialNum, lotNum;
string manufactDate;

public:

int setValues(int n1, int n2, string n3)
{
	
	serialNum = n1;
	lotNum = n2;
	manufactDate = n3;

}
void setA(int n1) //Setters/Mutators
{

	serialNum = n1;

}
void setB(int n2)
{

	lotNum = n2;

}

void setC(string n3)
{

	manufactDate = n3;

}


int getA() //Getters/Accessor
{

	return serialNum;

}

int getB() //Getters/Accessor
{

	return lotNum;

}

string getC()
{

	return manufactDate;

}

void displayAll()
{

cout << serialNum
 << endl << lotNum << endl<< manufactDate << endl;

}


};
int main()
{
	system("pause");
	inventory obj;
	obj.setValues(5, 6, "4 sep 2021");
	obj.displayAll();
	obj.setA(89);
	obj.setB(33);
	obj.setC("12 sep 2021");
	//cout<<obj.getA()<<endl;
	//cout<<obj.getB()<<endl;
	//cout<<obj.getC()<<endl;
	obj.displayAll();
	

}
