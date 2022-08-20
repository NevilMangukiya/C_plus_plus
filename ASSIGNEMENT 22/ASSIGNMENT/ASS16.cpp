#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "Enter Number:  ";
    cin >> n;
    
    if(n%4==0)
    {
    	cout << endl << n << " is even number.";
	}
	else
	{
		cout << endl << n << " is odd number.";
	}
    
    
	return 0;
}

