#include<iostream>
using namespace std;

int main()
{
	int a[50][50],b[50][50];
	int i,j,r,co;
	
	cout << "Enter Rows: ";
	cin >> r;
	
	cout << "Enter column: ";
	cin >> co;
	
	cout << endl << "Enter value of A: " << endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			cin >> a[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	
	cout << endl << "Matrix A is: " << endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			cout << a[i][j] << "     " ;
		}
		cout << endl;
	}
	
	cout << endl << "Matrix B is: " << endl;
	for(i=0;i<co;i++)
	{
		for(j=0;j<r;j++)
		{
			cout << b[i][j] << "     " ;
		}
		cout << endl;
	}
	
return 0;
}

