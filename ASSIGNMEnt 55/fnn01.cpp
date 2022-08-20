#include<iostream>
using namespace std;
void addition(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

void addition(int a,int b)
{
  int sum;
  cout << "Enter Value of A & B ";
  cin >> a >> b;
  sum=a+b;
   cout << endl << "Sum Of A & B is " << sum;
}
void sub(int a,int b)
{
  int area;
  cout << "Enter Value of A & B ";
  cin >> a >> b;
  area=a-b;
  cout << endl << "Subtract Of A & B is  " << area;
}

void mul(int a,int b)
{
  int area;
  cout << "Enter Value of A & B ";
  cin >> a >> b; 
  area=a*b;
  cout << endl << "Multiplication Of A & B is  " << area;
}

void div(int a,int b)
{
  int area;
  cout << "Enter Value of A & B ";
  cin >> a >> b;
  area=a/b;
  cout << endl << "Division Of A & B is  " << area;
}

void mod(int a,int b)
{
	int area;
    cout << "Enter Value of A & B ";
	cin >> a >> b;
	area=a%b;
	cout << endl << "Modulus of A & B is  " << area;
}





class Calculator
{
  int choice,r,l,h,a,b;
  char ch;
  
  public:
  	
  void operater()
  
  {
  	do
  	{
	 

	cout << endl << endl << "****************************************" << endl;

	 
    cout << endl << endl << "1 for Additoin" << endl <<  "2 for subtract" << endl << "3 for Multiplication" << endl << "4 for Division" << endl << "5 for Modulus " << endl << "0 For Exit..." << endl;
    cin >> choice;
  
  
    switch(choice)
    {
      case 1:
     			addition(a,b);
				break;

      case 2:
				sub(a,b);
				break;
		
      case 3:
	        	mul(a,b);
				break;
 	   case 4:
				div(a,b);
				break;

        case 5:
        	   mod(a,b);
        	   break;
        	   
        case 0:
        	   break;

      default:
		    	cout << "invalid choice";
      }
   }while(choice!=0);
}

};

int main()
{
    Calculator c1;
    
    cout << "****************************************" << endl;
    cout << "*************CALCULATOR*****************" << endl;
	cout << "****************************************" << endl;    
	c1.operater();
	

}


