#include<iostream>
#include<string.h>
using namespace std;

class School
{
	public:
		int stu_id;
		char stu_name[100];
		int stu_age;
		char stu_course[100];
		char stu_email[100];
		static char stu_school[100];
	    
	public:
		
		void setdata()
		{
			cout<<endl<<" Enter Id: ";
			cin>>stu_id;
			
			cout<<" Enter Name: "; 
			 cin >> stu_name;
		
			cout<<" Enter Age: ";
			cin>>stu_age;
		
			cout<<" Enter Course: ";
		    cin >> stu_course;
		    
			cout<<" Enter Email: ";
			cin >> stu_email;
		}
		
		void getdata()
		{
			cout<<endl<<" STUDENT INFORMATION: "<<endl;
			cout<<"============================================"<<endl;
			cout<<" Id: "<<stu_id<<endl;
			cout<<" Name: "<<stu_name<<endl;
			cout<<" Age: "<<stu_age<<endl;
			cout<<" Course: "<<stu_course<<endl;
			cout<<" Email: "<<stu_email<<endl;
			cout<<" School: "<<stu_school<<endl;
			cout<<"============================================="<<endl;
		}
};

char School::stu_school[100]="RNWIET";

int main()
{
	School s[100];
	int n,i;
	
	cout<<endl<<" Enter How Many Student: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i].setdata();
	}
	
	for(i=0;i<n;i++)
	{
		s[i].getdata();
	}
	
	return 0;
}


