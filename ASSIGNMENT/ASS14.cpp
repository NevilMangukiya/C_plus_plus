#include<iostream>
using namespace std;
int main()
{
	int year;
	
   cout << "Enter Year:  ";
   cin >> year;
   
   	if(year%4==0)
	{
		cout << endl << "This is Leap year.";
	}
	else
    {
    	 cout << endl << "This is not a Leap year.";
	}
	return 0;
}

