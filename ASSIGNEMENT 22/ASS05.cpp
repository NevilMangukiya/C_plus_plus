#include<iostream>
using namespace std;
int main()
{
	int math,phy,chem;
	
	cout << "Enter Maths Marks:  ";
	cin >> math;
	
	cout << "Enter Physics Marks:  ";
	cin >> phy;
	
	cout << "Enter Chemistry Marks:  ";
	cin >> chem;
	
	if(math>80 && phy>75 && chem>72)
	{
		cout << endl << "Grade A..";
	}
	
	else if(math>=60 && math<=80 || phy>=55 && phy<=75 || chem>=50 && phy <=72)
	{ 
	   cout << endl << "Grade B..";
	} 
     
    else if(math>=40 && math<60 || phy>=35 && phy<55 || chem>=35 && phy<50)
	{ 
	   cout << endl << "Grade C..";
	} 
	else
	{
		cout << endl << "Grade D(You are failed)..";
	}


}
