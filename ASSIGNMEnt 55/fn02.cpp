#include <iostream>
using namespace std;

long fact(long,long);

int  main()
{
	long n1,n2,n, f;

	cout << " Enter the Number : ";
	cin	>> n1;

     cout << ":Enter the number: ";
     cin >> n2;
   
     for(n=n1;n<=n2;n++)
     {
     	f = fact(n1)(n2);	
	 }
	cout << "\n  Factorial = "<< f;

	
}

long fact(long a)
{
	long f = 1;
	int i;
	for( i=1 ; i<=a ; i++ )
	{
		f = f * i;
	}
	return f;
}
