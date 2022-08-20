#include <iostream>
using namespace std;

int main() 
{
	
	int days,weeks,years,day;
	
	cout << "Enter Days:  ";
	cin >> days;
	
	years=days/365;
	weeks=days/7;
	days=days%365;
	days=days/7;
	
	cout << endl << "YEARS IS: " << years << 
	     endl << "WEEKS IS: " << weeks <<  
    	endl << "DAYS IS: " << days << endl;
	
	return 0;
}
