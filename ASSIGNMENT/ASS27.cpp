#include<iostream>
using namespace std;
int main()
{
	long int n,r,sum;
	
	cout << "Enter Positive Number:: ";
	cin >> n;
	
sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	
	cout << endl << "The Sum Of The Digits is:  " << sum;
	
	return 0;
	
	
}
