#include<iostream>
using namespace std;
class A
{
	public:
		 int a,b;
		 
		 void getnumber()
		 {
		 	cout << "Enter Value of A: " ;
		 	cin >> a;
		 }
		
};

class B : public A
{
	public :
		 void square()
		 {
		 	getnumber();
		 	cout << endl << "Square of " << a <<  " is::  " << (a*a);
		 	cout << endl << "-------------------------------------------------------------------" << endl << endl;
		 }
};
class C : public A
{
	public :
		 void cube()
		 {
		 	getnumber();
		 	cout << endl << "Cube of " << a << " is::  " << (a*a*a);
		 	cout << endl << "---------------------------------------------------------------------"<< endl;
		 }
};

int main()
{
	B b1;
	C c1;
	
	b1.square();
	c1.cube();
}
