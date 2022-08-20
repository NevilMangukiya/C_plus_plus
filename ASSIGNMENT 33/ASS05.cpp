#include <iostream>
#include <string.h>
using namespace std;

int  main()
{
	int i, j, n, c = 0, s = 0, d = 0, ss = 0;
	char ch[100];

	cout << " Enter a String ::: ";
	gets( ch );

	for( i=0 ; ch[ i ] != '\0' ; i++ )
	{
		if( ch[ i ] >= 65 && ch[ i ] <= 90 )
		{
			c++;
		}	
		
		else if( ch[ i ] >= 97 && ch[ i ] <= 122 )
 		{
 			 s++;
		}
		else if( ch[ i ] >= 48 && ch[ i ] <= 57 )
		{
	    	d++;
     	} 
		else
		{	
	     	ss++;
	    }
	}

	cout << "\n Total no. of Capital Letters : " << c;
	cout << "\n Total no. of Small Letters : " << s;
	cout << "\n Total no. of Digits : " << d;
	cout << "\n Total no. of Special Symbols : " << ss;

}
