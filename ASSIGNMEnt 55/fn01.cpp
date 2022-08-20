#include<iostream>
using namespace std;
void addition(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
int main()
{
  int choice,r,l,h,a,b;
  char ch;
  
  cout << "Enter Value of A & B ";
  cin >> a >> b;
 
    cout << "1 for Additoin" << endl <<  "2 for subtract" << endl << "3 for Multiplication" << endl << "4 for Division" << endl << endl;
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


      default:
		    	cout << "invalid choice";
    }
}

void addition(int a,int b)
{
  int sum;
  sum=a+b;
   cout << "Sum Of A & B is " << sum;
}
void sub(int l,int h)
{
  int area;
  area=l-h;
  cout << "Subtract Of A & B is  " << area;
}

void mul(int l,int h)
{
  int area;
  area=l*h;
  cout << "Multiplication Of A & B is  " << area;
}

void div(int l,int h)
{
  int area;
  area=l/h;
  cout << "Division Of A & B is  " << area;
}
