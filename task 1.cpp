#include<iostream>
using namespace std;
class Test
{

int a;
double b;
char c;
int* arr = 0;

public:

void setValues(int n1, double n2, char n3, int n)
{

a = n1;
b = n2;
c = n3;
arr = new int[n];

}
void setA(int n1) //Setters/Mutators
{

a = n1;

}
void setB(double n2)
{

b = n2;

}

void displayAll()
{

cout << a << endl << b << endl

<< c << endl << arr << endl;

}
int getA() //Getters/Accessor
{

return a;

}
char getC()
{

return c;

}
int func(int n)
{

a = n;
return a;

}

};
int main()
{

system("pause");

}
