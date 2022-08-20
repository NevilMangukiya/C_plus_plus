#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout << "Enter Value of A: ";
	cin >> a;
	
	
	cout << "Enter Value of B: ";
	cin >> b;
	
	
	cout << endl << "BEFORE CHANGEING" << endl << "A: "  << a << endl << "B " << b;

	a=a+b;
	b=a-b;
	a=a-b;
	
	cout << endl << endl << "AFTER CHANGEING" << endl << "A: "  << a << endl << "B " << b;
}


