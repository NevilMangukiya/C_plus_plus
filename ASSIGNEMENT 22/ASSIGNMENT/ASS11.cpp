#include <iostream>
using namespace std;

int main() 
{
	int number,root,i,sqt,temp;
	
    cout << "Enter Number You Have Find Square root: ";
    cin >> number;
    
    sqt=number/2;
    
temp=0;

while(sqt!=temp)

{

temp=sqt;

sqt=(number/temp+temp)/2;

}

cout << endl << "Square Root of " << number << " is " << sqt;
    
    return 0;

}
    
