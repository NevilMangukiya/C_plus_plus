#include<iostream>
using namespace std;

class employees
{
	private :
		int emp_id;
 		   char emp_name[100];
 		   char emp_age[100];
 		   char emp_role[100];
 		   char emp_email[100];
 		   char emp_city[100];
 		   int emp_expericence;
 		   char emp_company_name[100];
 		   
 	public :
 		
 		void setData()
 		{
 				cout << "_____________________________________________________________________________" << endl <<endl;

 				cout << "Enter Id    " ;           		     cin >>this->emp_id;
 	            cout << "Enter Name  " ;        		     cin >>this->emp_name;
 				cout << "Enter age   " ;               		 cin >>this->emp_age;
 				cout << "Enter role  " ;             		 cin >>this->emp_role;
 				cout << "Enter email " ;             		 cin >>this->emp_email;
 				cout << "Enter city  " ;                     cin >>this->emp_city;
 				cout << "Enter expericence   " ;             cin >>this->emp_expericence;
			 	cout << "Enter company name  " ;             cin >>this->emp_company_name;
		 }
		 void getData()
		 {
		 	cout << "_____________________________________________________________________________" << endl <<endl;
		 	
			 cout << "Id:     "          <<  this->emp_id << endl;
  			 cout << "Name:   "        <<  this->emp_name << endl; 
  			 cout<<  "Age:    " 	   	 << this->emp_age << endl; 
  			 cout<<  "Role:   " 		 << this->emp_role << endl;
 		     cout<<  "Email:  " 		 << this->emp_email << endl ;
  			 cout<<  "City:   "         << this->emp_city << endl;
  			 cout<<  "Expericence:   "  << this->emp_expericence << endl;  
  			 cout<<  "Company Name:  " << this->emp_company_name << endl;    
		 }
};

int main()
{
	employees e[100];
	int i,n;
	
	cout << "HOW MANY EMPLOYEES::  ";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		 e[i].setData();
	}
	
	
	for(i=0;i<n;i++)
	{
		 e[i].getData();
	}
}
