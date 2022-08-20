#include<iostream>
using namespace std;
int main()
{
	const float PI=3.14;
	int r,choice,result,result2;
	int ch;
	
do
{


	cout << endl << endl <<"Enter Radius: ";
	cin >> r;
	
	cout << "---------------------------------------------------------";
	

	    cout << endl << "1 For Area of Circle:";
	    cout << endl << "2 For Perimeter of Circle:";
	    cout << endl << "3 For Radius into Diameter:";
	    cout << endl << "4 for Exit..";
	    cout << endl << "Enter your Choice.. " ;
	    cin >> choice;
	    
	    switch(choice)
	    {
	    	case 1:
	    		   result=PI*r*r;
	    		   cout << endl << "Area of Circle is  " << result;
	    		   break;
	    		   
	    	case 2:
	    		   result=2*PI*r;
	    		   cout << endl << "Perimeter of Circle is  " << result;   
	    		   break;
	    		   
	    	case 3:
	    		   result=2*r;
	    		   cout << endl << "Radius into Diameter is  " << result;   
	    		   break;
	    		   
	    	case 4:
				   break;
            
            default:
            	   cout << "Invalid Choice...";
                   break;
		}
		cout << endl << "________________________________________________________________________________" << endl;
	}while(choice!=4);
		

}
