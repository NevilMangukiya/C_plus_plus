#include<iostream>
using namespace std;
int main()  
{

 int cube,i,n;

 cout << "Enter number you have find cube:  " ;
 cin >> n;

 for(i=0;i<n;i++)
 { 
    	cube=n*n*n;
 }

 cout << endl << "Cube of " << n << " is " << cube << endl;
 
 return 0;

}
