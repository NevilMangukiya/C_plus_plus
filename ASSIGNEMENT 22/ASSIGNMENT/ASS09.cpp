#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int exponent;
    float base,result=1;
	
	cout << "Enter base:  ";
	cin >> base;
	
	cout << "Enter exoponent:  ";
	cin >> exponent;
	
	cout << endl << "Result is " << base << "^" << exponent << " = ";
	
	while (exponent != 0) 
	{
        result *= base;
        --exponent;   
    }
      cout << result;
   
   
   
    return 0;
}
