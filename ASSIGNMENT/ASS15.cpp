#include<iostream>
using namespace std;
int main()
{
    char ch;
    
    cout << "Enter an character:  ";
    cin >> ch;
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='O' || ch=='E' || ch=='I' || ch=='U')
    {
    	cout << endl << ch << " is Vowel character";
	}
	else
	{
		cout << endl << ch << " is constant character U";
	}
    
	return 0;
}

