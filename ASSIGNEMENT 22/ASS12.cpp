#include<iostream>
using namespace std;
int main()
{
	int hr,mi,se;

		cout << "Enter Yours Seconds: ";
		cin >> se;
		
	hr=se/3600;
	mi=(se/60)%60;
	se=se%60;
	
	cout << endl << "HH::MM::SS = " << hr << ":" << mi << ":" << se;
}
