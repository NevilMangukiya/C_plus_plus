#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char s1[25],s2[25],s3[25];
	
	cout << "Enter Two string: ";
	cin >> s1 >> s2;
	
	cout << endl << "Before Swapping are: " << endl ;
	cout << "1.  "  << s1;
	cout << "  2.  "  << s2;
	
	strcpy(s3,s1);
	strcpy(s1,s2);
	strcpy(s2,s3);
	
	cout << endl << endl  << "After Swapping are: " << endl ;
	cout << "1.   " << s1;
	cout << "  2.   " << s2;
	
	return 0;
	
}
