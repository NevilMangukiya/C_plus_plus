#include<iostream>
using namespace std;
int main()
{
	long int n,r,x,rev;
	
	cout << "Enter Any Number:  ";
	cin >> n;
	 
	 x=n;
	 rev=0;
	 while(n!=0)
	 {
	 	r=n%10;
	 	rev=(rev*10)+r;
	 	n=n/10;
	 }
	if(rev=x)
	{
		cout << endl << "This is Palindrome Number.";
	}
	else
	{
		cout << endl << "This is Not Palindrome Number.";
	}
	return 0;
	
}

