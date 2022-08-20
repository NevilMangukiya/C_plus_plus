#include<iostream>
#include<string.h>
using namespace std;


 class classdetails
 {
 	private :
 		 char cl_name[100];
 		 
 	public :
 		 void setclassdetails()
 		 {
		  	cout << "_____________________________________________________________________________" << endl <<endl;

 		      cout << "Enter Class Name:  "	;
 		      cin >> cl_name;
 		  
		  }
		  
		  void getclassdetails()
		  {
		  	cout << "Class name is:  " << cl_name;
		  }
 };
 
 
class Students
{
	private :
		  char name[100];
		  int Grid;
		  
		  
		
	public :
		 void setStudents()
		 {
		 	
		 	 cout << "Enter NAME::  " ;          cin >> this->name;
		 	  cout << "Enter GRID::  " ;          cin >> this->Grid;
		 }
		 
		 void getStudents()
		 {
		 	cout << "NAME:   "  << this->name << endl;
		 	cout << "GRID:  " << this->Grid << endl;
		 }
	
};


int main()
{
	Students s[100];
	classdetails c[100];
	int i,n;
	
	cout << "HOW MANY STUDENTS  ";
	cin >> n;
	
	
	for(i=0;i<n;i++)
	{
		c[i].setclassdetails();
		s[i].setStudents();
		
		
	}
	
		for(i=0;i<n;i++)
	{
		cout << endl;
        c[i].getclassdetails();   
		cout <<endl; 
		s[i].getStudents();
	}
	
}
