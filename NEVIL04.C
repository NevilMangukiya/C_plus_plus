#include<iostream>
#include<string.h>
using namespace std;

class Highschool
{
	private :
		  int id;
		  char stu_name[100];
		  int stu_rollno;
		  int stu_standard;
		  int stu_age;
		  int stu_contact;
		  char stu_address[100];
		  
		  
	public :
		 static char stu_edu_institute_name[100];

		 
		 		  
	public :
		  void schoolData()
		  {
	 		cout << "_____________________________________________________________________________" << endl <<endl;
	
		  	  cout << "Enter Id             ";    cin >>this->id;
		  	  cout << "Enter students name  ";    cin >>this->stu_name;
		      cout << "Enter Roll number    ";    cin >>this->stu_rollno;
			  cout << "Enter Standard       ";    cin >>this->stu_standard;
              cout << "Enter Age            ";    cin >>this->stu_age;
			  cout << "Enter Contact        ";    cin >>this->stu_contact;
              cout << "Enter Address        ";    cin >>this->stu_address;	    
		   }
		  void getData()
		  {
		  	
		  	cout << "_____________________________________________________________________________" << endl <<endl;

		  	cout << "ID:              " << this->id << endl;
 		  	cout << "NAME:            "  << this->stu_name<< endl;
            cout << "ROLL NO:         " << this->stu_rollno<< endl;
			cout << "STANDARD:        " << this->stu_standard<< endl;
			cout << "AGE:             " << this->stu_age<< endl;
			cout << "CONTACT:         " << this->stu_contact<< endl;
			cout << "ADDRESS:         " << this->stu_address<< endl;
			cout << "INSTITUTE NAME:  " << this->stu_edu_institute_name<< endl;

		  }
};

char Highschool::stu_edu_institute_name[100]="RNW";

int main()
{
	
Highschool::stu_edu_institute_name;
	Highschool s[100];
	int i,n;
	
	cout << "HOW MANY STUDENTS::  ";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		 s[i].schoolData();
	}
	
	
	for(i=0;i<n;i++)
	{
		 s[i].getData();
	}
}
4
