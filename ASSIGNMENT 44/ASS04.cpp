#include<iostream>
using namespace std;

int main()
{
	int sum=0,a[5],b[5],i,sum1=0;
	float average=0;
	
	cout << "Enter Ronak Viva Marks(Out of 30) ";
	
	for(i=0;i<5;i++)
	{
		cin >> a[i];
	}
	
	cout << "Enter Ronak Final Marks(Out of 70) ";
	
	for(i=0;i<5;i++)
	{
		cin >> b[i];
	}
	
	cout << endl << "Ronal Final Examination Marks(out of 100) is " << endl;
	
	for(i=0;i<5;i++)
	{
		sum=a[i]+b[i];
		cout << endl << "Total marks " << sum;
		sum1+=a[i]+b[i];
	}
	
	 average=sum1/5;
     cout << endl << endl << "Average of Total marks is " << average << endl;
 }
