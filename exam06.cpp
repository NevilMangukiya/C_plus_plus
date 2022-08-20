#include<iostream>
using namespace std;

class Top
{
	protected :
		 int emp_id;
		 char emp_name[100];
		 int emp_age;
		 
    public:
    	 void getbasicinfo()
    	 {
    	 	cout << endl << "Enter Employees details: " << endl << endl;
    	 	cout << "Enter Employees Id: ";  cin >>this->emp_id;
    	 	cout << "Enter Employees Name: ";   cin >>this->emp_name;
    	 	cout << "Enter Employees Age: ";    cin >>this->emp_age;
         }
         
         void show()
         {
         	cout << "Id:           " << this->emp_id << endl;
		 	cout << "Name:         " << this->emp_name << endl ;
		 	cout << "Age:          " << this->emp_age << endl;
		 }
};

class Middle : public Top
{
	protected:
		 char emp_role[100];
		 char emp_email[100];
		 int emp_expericence;
		 
	public:
		 
		 void getdeptinfo()
		 {
		 	cout << "Enter Employees Role: ";  cin >>this->emp_role;
    	 	cout << "Enter Employees Email: ";   cin >>this->emp_email;
    	 	cout << "Enter Employees Expericence: ";    cin >>this->emp_expericence;
		 }
		 void showx()
		 {
		 	cout << "Role:         " << this->emp_role << endl;
		 	cout << "Email:        " << this->emp_email << endl;
		 	cout << "Expericence:  " << this->emp_expericence << endl;
		 }
		 
};

class Bottom : public Middle
{
	public:
		char emp_salary[100];
		char emp_company_name[100];

		 void getemployeedetails()
		 {
		 	cout << "Enter Employees Salary: ";          cin >>this->emp_salary;
		 	cout << "Enter Employees Company name: ";    cin >>this->emp_company_name;
		 }
		 void printfemployeedetails()
		 {
             cout << "Salary:       " << this->emp_salary << endl;
             
		     cout << "Company name: " << this->emp_company_name << endl;
	
		 	
		 }
};
 
int main()
{
	Bottom b[100];
    int i,n;
		
		
	cout << "How Many Employees:: ";
	cin >> n;
	
	
	for(i=0;i<n;i++)
	{
	    b[i].getbasicinfo();
	    b[i].getdeptinfo();
	  	b[i].getemployeedetails();	
	}
	cout << endl << "Emolyees details are: " << endl;
	cout << endl << endl;
	
	for(i=0;i<n;i++)
	{
	  	b[i].show();
	  	b[i].showx();
	  	b[i].printfemployeedetails();	
	}
}
