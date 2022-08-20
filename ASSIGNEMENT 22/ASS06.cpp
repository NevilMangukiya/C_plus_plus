#include<iostream>
using namespace std;
int main()
{
	char choice;
    int a,b,result;
    int ch;
 do
 {
  
    cout << endl << endl << "Enter Value of A: ";
    cin >> a;
    
    cout << "Enter Value of B: ";
    cin >> b;
    
    cout << endl << "Enter Operators: "<< endl;
    cout << endl << "+ for addition.";
    cout << endl << "- for subtraction.";
    cout << endl << "* for multiplication.";
    cout << endl << "/ for division.";
    cout << endl << "% for modulus.";
    cout << endl << "0 for exit. " << endl << endl; 
    
    cin >> choice;
    
    switch(choice)
    {
    	case '+':
    		     result=a+b;
    		     break;
    		     
    	case '-':
    		     result=a-b;
    		     break;
    		     
    	case '*':
    		     result=a*b;
    		     break;
    		     
    	case '/':
    		     result=a/b;
    		     break;
    		     
    	case '%':
    		     result=a%b;
    		     break;
    		     
     	case  0:
     	         break;
    		    
    	default:
    		 cout << "Invalid choice.";
    		 break;	
    
	}
	 
	cout << endl << "A" << choice << "B" << " = " << result;

}
while(choice!=0);	
    
}


