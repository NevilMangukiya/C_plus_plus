#include<iostream>
using namespace std;

int main()
{
	int num,i,che=0;
	
	cout << "Enter Number to check prime or not:  ";
	cin >> num;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
		    che++;	
		    break;
		}
	}
	if(che==0)
	{
		cout << endl << num << " Is a Prime Number.";
	}
	else
	{
		cout << endl << num << " Is Not a Prime Number.";
	}
}
