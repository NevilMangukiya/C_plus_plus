#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	char s[25]; 
	int i;
		
	cout << "Enter String: " ;
	cin >> s;
	
	for(i=0;s[i]!='\0';i++)
    {
    	if(s[i]>='a' && s[i]<='z')
    	{
    		s[i]=s[i]+32;
		}
	}
	cout << "THIS STRING IS LOWERCASE:" << s;

	
	for(i=0;s[i]!='\0';i++)
    {
    	if(s[i]>='A' && s[i]<='Z')
    	{
    		s[i]=s[i]-32;
		}
	}
	cout << endl << "THIS STRING IS UPPERCASE:" << s;
}
