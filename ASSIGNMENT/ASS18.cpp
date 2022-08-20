#include<iostream>
using namespace std;

int main()
{	int num,i;
	
	
	cout << "Enter Number: ";
	cin >> num;
	

	
    for(i=num-1;i>1;i--)
    {
    	num=num*i;
	}
	cout << endl << "Factorial of " << num;
	return 0;

}
