#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Indian_Army
{
	private:
		char a[100];
		int b[100];
		int i, n;
		
	public:
		
		void menu()
		{
			cout<<endl<<"====================================="<<endl;
			cout<<"\t\tMENU"<<endl;
			cout<<"====================================="<<endl;
			cout<<" [1] Incoding Massage"<<endl;
			cout<<" [2] Decoding Massage"<<endl;
			cout<<" [0] Exit"<<endl;
			cout<<"====================================="<<endl;
		}
		
		void Incoding()
		{
			cout<<endl<<" Enter Massage: ";
			fflush(stdin);
			gets(this->a);
			
			cout<<endl<<"-----------------------------------------------------------"<<endl;
			cout<<" Massage Incoding is: ";
			for(i=0;a[i]!='\0';i++)
			{
				cout<<int(a[i]);
			}
			cout<<endl;
			cout<<"-----------------------------------------------------------"<<endl;
		}
		
		void Decoding()
		{
			cout<<endl<<" Enter How many Number: ";
			cin>>n;
			
			cout<<endl;
			for(i=0;i<n;i++)
			{
				cout<<" Enter Number: ";
				cin>>b[i];
			}
			
			cout<<endl<<"-----------------------------------------------------------"<<endl;
			cout<<" Massage Decoding is: ";
			for(i=0;i<n;i++)
			{
				cout<<char(b[i]);
			}
			cout<<endl;
			cout<<"-----------------------------------------------------------"<<endl;
		}
};

int main()
{
	Indian_Army i1;
	int c;
	
	do{
		i1.menu();
		
		cout<<endl<<" Enter Your Choice: ";
		cin>>c;
		
		if(c==1)
		{
			i1.Incoding();
		}
		else if(c==2)
		{
			i1.Decoding();
		}
		else if(c!=0)
		{
			cout<<endl<<" Please, Enter Right Value..."<<endl;
		}
		
	}while(c!=0);
	
	return 0;
}




