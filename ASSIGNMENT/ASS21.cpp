#include<iostream>
using namespace std;
int main()
{
  	 int n,count=0;
	
	cout << "Enter The Positive Numbers: ";
	cin >> n;
	
	while(n!=0)
	{
		n=n/10;
		count=count+1;
	}
	cout << endl << "The Numbers Of Digits is " << count << endl;
}
