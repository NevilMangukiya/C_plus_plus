#include<iostream>
using namespace std;

int main()
{
	int i,j,ar[10],max;
	
	cout << "Enter 10 Soliders killing score: ";
	
	for(i=0;i<10;i++)
	{
		cin >> ar[i];
	}
	
	for(i=0;i<10;i++)
	{
		if(max<ar[i])
		{
			max=ar[i];
		}
	}
	
	cout << endl << "Highest Killing score is: " << max;
	
	return 0;
}
