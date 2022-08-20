	#include<iostream>
	#include<stdio.h>
	#include<string.h>
	using namespace std;
	
	class String
	{
		private:
			char a[100];
			int i;
			
		public:
			
			void menu()
			{
				cout<<endl<<"================================="<<endl;
				cout<<"\t\t MENU"<<endl;
				cout<<"================================="<<endl;
				cout<<" [1] Lowercase"<<endl;
				cout<<" [2] Uppercase"<<endl;
				cout<<" [3] Titlecase"<<endl;
				cout<<" [4] Togglecase"<<endl;
				cout<<" [0] Exit"<<endl;
				cout<<"================================="<<endl;	
			}
			
			void Lowercase()
			{
				cout<<endl<<" Enter Massage: ";
				fflush(stdin);
				gets(this->a);
				
				 for(i=0;a[i]!='\0';i++)
				 {
				 	if(a[i]>='A'&&a[i]<='Z')
				 	{
				 		a[i] = a[i]+32;
					}
				 }
				 cout<<endl<<"-------------------------------------"<<endl;
				 cout<<" Lowercase is: "<<this->a<<endl;
				 cout<<"-------------------------------------"<<endl;
			}
			
			void Uppercase()
			{
				cout<<endl<<" Enter Massage: ";
				fflush(stdin);
				gets(a);
				
				 for(i=0;a[i]!='\0';i++)
				 {
				 	if(a[i]>='a'&&a[i]<='z')
				 	{
				 		a[i] = a[i]-32;
					}
				 }
				 cout<<endl<<"-------------------------------------"<<endl;
				 cout<<" Uppercase is: "<<this->a<<endl;
				 cout<<"-------------------------------------"<<endl;
			}
			
			void Titlecase()
			{
				cout<<endl<<" Enter Massage: ";
				fflush(stdin);
				gets(a);
				
				if(a[0]>='a'&&a[0]<='z')
				{
				 	a[i] = a[i]-32;
				}
				
				cout<<endl<<"-------------------------------------"<<endl;
				cout<<" Titlecase is: "<<this->a<<endl;
				cout<<"-------------------------------------"<<endl;
			}
			
			void Togglecase()
			{
				cout<<endl<<" Enter Massage: ";
				fflush(stdin);
				gets(a);
				
				 for(i=0;a[i]!='\0';i++)
				 {
				 	if(a[i]>='a'&&a[i]<='z')
				 	{
				 		a[i] = a[i]-32;
					}
					else if(a[i]>='A'&&a[i]<='Z')
				 	{
				 		a[i] = a[i]+32;
					}
				 }
				 cout<<endl<<"-------------------------------------"<<endl;
				 cout<<" Togglecase is: "<<this->a<<endl;
				 cout<<"-------------------------------------"<<endl;
			}
	};
	
	int main()
	{
		String s1;
		int c;
		
		do{
	
			s1.menu();
			
			cout<<"Enter your choice: ";
			cin>>c;
			
			if(c==1)
			{
				s1.Lowercase();	
			}
			else if(c==2)
			{
				s1.Uppercase();
			}
			else if(c==3)
			{
				s1.Titlecase();
			}
			else if(c==4)
			{
				s1.Togglecase();
			}
			else if(c==0)
			{
				cout<<endl<<"Enter Valid Value..."<<endl;
			}
		
		}while(c!=0);
		
		return 0;
	}

