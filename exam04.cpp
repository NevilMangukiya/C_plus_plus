#include<iostream>
using namespace std;

class Basicinfo
{
	protected :
		 int emp_id;
		 char emp_name[100];
		 int emp_age;
		 
    public:
    	 void getbasicinfo()
    	 {
    	 	cout << "Enter Employees Id: ";  cin >>this->emp_id;
    	 	cout << "Enter Employees Name: ";   cin >>this->emp_name;
    	 	cout << "Enter Employees Age: ";    cin >>this->emp_age;
         }
};

class Deptinfo
{
	protected:
		 char emp_role[100];
		 char emp_email[100];
		 int emp_expericence;
		 char emp_company_name[100];
		 
	public:
		 
		 void getdeptinfo()
		 {
		 	cout << "Enter Employees Role: ";  cin >>this->emp_role;
    	 	cout << "Enter Employees Email: ";   cin >>this->emp_email;
    	 	cout << "Enter Employees Expericence: ";    cin >>this->emp_expericence;
		 	cout << "Enter Employees Company name: ";    cin >>this->emp_company_name;
		 }
		 
};

class Employee : public Basicinfo,public Deptinfo
{
	public:
		 void getemployeedetails()
		 {
		 	cout << endl << "Enter Emloyees details: " << endl << endl;
		 	getbasicinfo();
		 	getdeptinfo();
		 } 
		 void printfemployeedetails()
		 {
		 	cout << endl << "Employees Information is:  " << endl << endl ;
		 	cout << "Id:           " << this->emp_id << endl;
		 	cout << "Name:         " << this->emp_name << endl ;
		 	cout << "Age:          " << this->emp_age << endl;
		 	cout << "Role:         " << this->emp_role << endl;
		 	cout << "Email:        " << this->emp_email << endl;
		 	cout << "Expericence:  " << this->emp_expericence << endl;
		 	cout << "Company name: " << this->emp_company_name << endl;
		 	
		 }
};
 
int main()
{
	Employee e[100];
    int i,n;
		
		
	cout << "How Many Employees:: ";
	cin >> n;
	
	
	for(i=0;i<n;i++)
	{
	  	e[i].getemployeedetails();	
	}
	
	for(i=0;i<n;i++)
	{
	  	e[i].printfemployeedetails();	
	}
}
