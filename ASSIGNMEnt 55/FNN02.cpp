#include<iostream>

using namespace std;

void factorial()
{
	 int n1,n2,fact=1,i;
	 
	  cout << endl << "Enter First Numbers: ";
	  cin >> n1;
	  
	  cout << endl << "Enter Ending Numbers: ";
	  cin >> n2;
	  
	  if(n1<n2)
	  {
	   for(i=n1;i<=n2;i++)
	   {
	  	    fact*=i;
	   }
	   
	    cout << endl << "____________________________________________________" <<  endl;
	    cout << endl << " Factorial of " << n1 << " To " << n2 << " is: " << fact << endl;
	  	cout << endl << "____________________________________________________" <<  endl;
		     
	  }
	  else
	  {
	  	  cout << "Please!! Enter First Numbers Less Than Ending Numbers......" << endl;
	  }
}

class Akshay
{
	 public: 
	         void fact()
	         {
	         	 factorial();
			 }
};

int main()
{
	Akshay a1;
	
	a1.fact();
	return 0;
	
}
