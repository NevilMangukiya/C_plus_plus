#include<iostream>
using namespace std;

void menu()
{
	cout << endl << endl << "***************MENU*****************" << endl;
	cout << "|| [1] Seconds Into Time     ||" << endl;
	cout << "|| [2] Time Into Seconds     ||" << endl;
	cout << "|| [3] Exit                  ||" << endl;
  	cout << "************************************" << endl;
}

void second_into_time()
{
	 int n,a,H,M,S;
	 
	 cout << "Enter Seconds: ";
	 cin >> n;
	 
	 H=n/3600;
     M=(n/60)%60;
     S=n%60;
     
     cout << endl <<"TOTAL TIMES IS " << H << " :: " << M << " :: " << S << endl;
     
}

void Time_into_second()
{
	int n,H,M,S,T;
		
	cout << "Enter Hours: ";
	cin >> H;
	
	cout << "Enter Minutes: ";
	cin >> M;
	
	cout << "Enter Seconds: ";
	cin >> S;
	
     T=(H*3600)+(M*60)+S;
     
     cout << endl << "TOTAL SECONDS IS " << T << endl;
}

class Operation
{
	public: 
	     int c;
	     
	     void time()
	     {
	     	 do
			 {
			 	menu();
			 	
			 	cout << "Enter Your Choice: ";
				cin >> c;
				cout << endl;
				
				if(c==1)
				{
					 second_into_time();	
				}
				else if(c==2)
				{
					Time_into_second();	
				}
				else if(c==3)
				{
					
				}
				else if(c!=0)
				{
					cout<<"	Enter Valid Value..."<<endl;
				}
				
			}while(c!=3);
		}
};

int main()
{
	Operation o1;
	
	o1.time();
	
	return 0;
}
