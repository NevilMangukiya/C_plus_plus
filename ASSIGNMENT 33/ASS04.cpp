#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class String
{
	private:
		char name[100], l_name[100], passport[100], fullname[100];
		int a,b,c;
		
	public:
		
		void setdata()
		{
			cout<<endl<<" Enter First name: ";
			cin>>this->name;
			cout<<" Enter Last name: ";
			cin>>this->l_name;
			cout<<" Enter Passport ID: ";
			cin>>this->passport;
		}
		
		void getdata()
		{
			strcpy(fullname, strcat(name,l_name));
			
			cout<<endl<<endl<<"======================================="<<endl;
			cout<<" \t\tINFORMATION"<<endl;
			cout<<"======================================="<<endl;
			cout<<" Full Name: "<<this->fullname<<endl;
			cout<<" Passport ID: "<<this->passport<<endl;
			cout<<"======================================="<<endl;
		}
};

int main()
{
	String s1;
	
	s1.setdata();
	
	s1.getdata();
	
	return 0;
}

