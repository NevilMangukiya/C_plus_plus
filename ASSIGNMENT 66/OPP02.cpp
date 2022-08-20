#include<iostream>
#include<string.h>
using namespace std;

class business
{
	private:
		char acc_no1[100]="1234567890";
		char pass1[100]="775122";
		char acc_no[100], pass[100];
		char name[100];
		int amt,c,d;
	
	public:
		
		void businessman()
		{
			cout << endl <<" Enter Name: ";
			fflush(stdin);
			gets(name);
			
			cout  <<" Enter Account Number: ";
			fflush(stdin);
			gets(acc_no);
			
			cout << " Enter Password: ";
			fflush(stdin);
			gets(pass);
			
		}
		
		void menu()
		{
			cout<<endl<<"	>>>>>>>>>>>MENU<<<<<<<<<<<"<<endl;
			cout<<"	=========================="<<endl;
			cout<<"	 [1] Deposite	        "<<endl;
			cout<<"	 [2] Withdraw	        "<<endl;
			cout<<"	 [0] Exit             "<<endl;
			cout<<"	=========================="<<endl<<endl;
		}
		
		void solution()
		{
			if(strcmp(acc_no1,acc_no)==0 && strcmp(pass1,pass)==0 )
			{
				cout<<" Enter Total Amount: ";
				cin>>amt;
				
				if(amt==18000)
				{
					do{
						menu();
					
						cout<<" Enter Your Choice: ";
						cin>>c;
						
						if(c==1)
						{
							cout<<"how many deposit:- ";
							cin>>d;
							amt+=d;
							cout<<endl<<"your balance is: "<<amt<<endl;
						}
						else if(c==2)
						{
							cout<<"how many Withdraw:- ";
							cin >> d;
							amt -= d;
							cout << endl <<"your balance is: "<<amt<<endl;
						}
						else if(c!=0)
						{
							cout << endl <<" Please, Enter Valid Value...."<<endl;
						}
						
					}while(c!=0);
					
				}
				else
				{
					cout << endl <<" Sorry, You aren't able to open..."<<endl;
				}
			}
			else
			{
				cout << endl <<" Please Enter Right Account no and Password...."<<endl;
			}
		}
};

int main()
{
	business b1;
	
	b1.businessman();
	
	b1.solution();
	
	return 0;
}

