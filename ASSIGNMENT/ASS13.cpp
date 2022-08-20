#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter any value: ";
	cin >> ch;
	
	cout << endl;
	if(ch>=65 && ch<=90)
	{
		cout << ch << " IS UPPERCASE CHARACTER. ";
	}
	
	else if(ch>=97 && ch<=122)
	{
		cout << ch << " IS LOWERCASE CHARACTER. ";
	}
	
	else if(ch>='0' && ch<='9')
	{
		cout << ch << " IS DIGIT. ";
	}
	
    else
	{
		cout << ch << " IS SPECIAL CHARACTER. ";
	}
	return 0;
	
}
