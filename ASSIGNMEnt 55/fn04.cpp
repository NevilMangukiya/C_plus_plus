#include<iostream>
#include<math.h>
using namespace std;
void num(int,int,int);
void square(int);
void root(int);

int main()
{
	int a,b,c,choice;
	
	cout<<"WHAT YOU WANT TO FIND: "<<endl;
	cout<<"Press '1' for find maximum numbers of 3: "<<endl;
	cout<<"Press '2' for Square: "<<endl; 
	cout<<"Press '3' for Squareroot: "<<endl; 
	
	cout << "Enter Your choice: ";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			 cout << "Enter value of A & B & C: ";
			 cin >> a >> b >> c;
			 num(a,b,c);
			 break;
			 
		case 2:
			 cout << "Enter value of A : ";
			 cin >> a;
			 square(a);
			 break;
			 
		case 3:
			 cout << "Enter value of A: ";
			 cin >> a;
			 sqrt(a);
			 cout << sqrt;
			 
			 
			 break;
			 
		default: 
		      cout << "Invalid Choice...";
	}
}
	
	void num(int a,int b,int c)
	{  
	  int n1,n2,n3,n4;
		 
	 if(n1>n2)
	 {
	    if (n1>n3)
	   {
	   	   cout << "A is greater.. ";
	   }
	   else
	   {
	   	   cout << "C is greater.. ";
	   }
     }
     
	 if(n2>n3) 
	    {
	       cout << "B is greater.. ";
	    }
        else
		  {
	  	   cout << "C is greater.. ";
			}
    }
        
    void square(int s)
    {
    	int o;
    	
    	o =square(s);
    	cout << "SQUARE OF is" << x << endl;
	}
	
   void root(int n)
    {
    	int y;
    	
    	y=sqrt(n);
    	cout << "SQUARE is" << y <<  endl;
	}

	 

