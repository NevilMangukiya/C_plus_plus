#include<iostream>
using namespace std;

int main()
{
	int  p,r,t,si;
	
	cout << "Enter Amount: ";
	cin >> p;

	cout << "Enter Rate: ";
	cin >> r;
	
	cout << "Enter Time: ";
	cin >> t;
	
	si=(p*r*t)/100;
	
	cout << endl << "Simple Intrest Is: " << si;
}
