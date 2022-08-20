#include<iostream>
using namespace std;

int main()
{ 	
	
	char string[26];
	int i, j, flag = 1;

	cout << " Enter the string (max. 25 characters) : ";
	cin >> string[i];
	
	for(int len=0 ; string[len] !='\0' ; len++) 
		
	for(i=0, j=len-1 ; i<len/2 ; i++,j--)
	{
		if(string[ i ] != string[ j ])
		{
			flag = 0;
			break;
		}
	}
	
	if( flag )			//  if( flag != 0 )
		cout << "\n It is Palindrome.";
	else
		cout << "\n It is not a palindrome";

	
}
