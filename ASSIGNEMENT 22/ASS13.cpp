#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int amt,rate,noofyear,EMI;
	
	cout << "Enter Principal Amount: ";     //p    * r * pow(1 + r, t)) / (pow(1 + r, t) - 1);
	cin >> amt;

	cout << "Enter Rate of Interest: ";
	cin >> rate;
	
	cout << "Enter Number of Years : ";
	cin >> noofyear;
	
	rate=rate/(12*100);
	noofyear=noofyear*12;
	
	EMI = {amt * rate * pow(1+rate,noofyear) / pow(1+rate,noofyear)-1};
	
	cout << endl << "Your Monthlly EMI IS " << EMI;
	
}
