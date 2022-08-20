#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class String
{
	private:
		char a[100], b[100], c[100], name1[100], name2[100];
	
	public:
	    String()
		{
			cout<<endl<<" Enter Your name: ";
			cin>>this->name1;
			cout<<" Enter Dare 1: ";
			fflush(stdin);
			gets(this->a);
			
			cout<<endl<<" Enter Your name: ";
			cin>>this->name2;
			cout<<" Enter Dare 2: ";
			fflush(stdin);
			gets(this->b);
		}
		
		void solution()
		{
			strcpy(c, b);
			strcpy(b, a);
			strcpy(a, c);
			
			cout<<endl<<"================================================"<<endl;
			cout<<" Dare for "<<this->name1<<" is "<<this->a<<endl;
			cout<<"======================================================"<<endl;
			
			cout<<endl<<"======================================================"<<endl;
			cout<<" Dare for "<<this->name2<<" is "<<this->b<<endl;
			cout<<"======================================================"<<endl;
		}
};

int main()
{
	String s1;
	
	s1.solution();
	
	return 0;
}

