#include<iostream>
using namespace std;
int main()
{
	int base,height,area,r,sum=0;
	
	cout << "Enter Base:  ";
	cin >> base;
	
	cout << "Enter Height:  ";
	cin >> height;
	
	area=(base*height)/2;
	
	cout << endl << "Area of traingle is: " << area;
	
	while(area!=0)
	{
		r=area%10;
	    sum=sum+r;
		area=area/10;
	}
	
	cout << endl << endl << "The Sum Of The Digits is:  " << sum;
	
	return 0;
	
	 
}
