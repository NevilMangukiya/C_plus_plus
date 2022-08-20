#include<iostream>
using namespace std;
int main()
{
	int weight,height,bmi;
	
	cout << "Enter Your Weight(In pounds):  ";
	cin >> weight;
	
	cout << "Enter Your Height(In Inches):  ";
	cin >> height;
	
    bmi=(weight*703)/(height*height);
    
    cout << endl << "Your BMI Is:  " << bmi << endl;
    if(bmi<=18.5)
    {
    	cout << endl << "You are underweight ";
	}
   else if(bmi >18.5 && bmi<=25)
	{
		cout << endl << "You are Optimal shape ";
	}
	else if(bmi>25)
	{
		cout << endl << "You are Overweight ";
	}
    return 0;
}

