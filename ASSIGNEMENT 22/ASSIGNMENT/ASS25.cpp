#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,n4;
	
	cout << "Enter value of A: ";
	cin >> n1;
	
	cout << "Enter value of B: ";
	cin >> n2;
	
	cout << "Enter value of C: ";
	cin >> n3;
	
	cout << "Enter value of D: ";
	cin >> n4;
	
   if(n1>n2 && n1>n3 && n1>n3)
   {
   	   cout << "A is greater.. ";
   }
   
   else if(n2>n3 && n2>n4)
   {
   	   cout << "B is greater.. ";
   }
   
   else if(n3>n4)
   {
   	   cout << "C is greater.. ";
   }
   
   else 
   {
   	   cout << "D is greater.. ";
   }
     
     

}
