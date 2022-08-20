#include<iostream>
using namespace std;

void menu()
{
	cout<<endl<<"	***********MENU***********"<<endl;
			cout<<"	=========================="<<endl;
			cout<<"	|| [1] Seconds		||"<<endl;
			cout<<"	|| [2] Hours	        ||"<<endl;
			cout<<"	|| [3] Minutes          ||"<<endl;
			cout<<"	|| [4] Time 		||"<<endl;
			cout<<"	|| [0] Exit		||"<<endl;
			cout<<"	=========================="<<endl<<endl;
}

void Seconds()
{
	int se1, se2;
	
	cout << " Enter First Seconds: ";
	cin >> se1;
	
	cout << endl <<" Enter Last Seconds: ";
	cin >> se2;
	
	if(se1<se2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<" Difference of two given time is: " << se2 - se1 <<endl;
	}
	else if(se1>se2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<" Difference of two given time is: "<< se1 - se2<<endl;
	}
	
}

void Hours()
{
	int h1, h2;
	
	cout << endl <<" Enter First Hours: ";
	cin >> h1;

	cout << endl <<" Enter Last Hours: ";
	cin >> h2;
	
	if(h1<h2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<" Difference of two given time is: "<<h2-h1<<endl;
	}
	else if(h1>h2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<" Difference of two given time is: "<<h1-h2<<endl;
	}
	
}

void Minutes()
{
	int m1, m2;
	
	cout <<" Enter First Minutes: ";
	cin >> m1;
	cout << endl <<" Enter Last Minutes: ";
	cin >> m2;
	
	if(m1<m2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<" Difference of two given time is: "<<m2-m1<<endl;
	}
	else if(m1>m2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<" Difference of two given time is: "<<m1-m2<<endl;
	}
	
}

void Time()
{
	int h1,m1,s1,h2,m2,s2,a,b,c,e,h3,m3,s3;
	
	cout << endl <<" Enter Hours: ";
	cin >> h1;
	cout << " Enter Minutes: ";
	cin >> m1;
	cout << " Enter Seconds: ";
	cin >> s1;
	
	cout << endl <<" Enter Hours: ";
	cin >> h2;
	cout << " Enter Minutes: ";
	cin >> m2;
	cout << " Enter Seconds: ";
	cin >> s2;
	
	if(h1>h2)
	{
		a=s1-s2;
		s3=a%60;
		b=a/60;
		c=m1-m2-b;
		m3=c%60;
		e=c/60;
		h3=h1-h2-e;
		
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<"Substraction of above time is "
		<<h3<<" hours "
		<<m3<<" minutes "
		<<s3<<" seconds "<<endl;
		cout<<"------------------------------------------------------"<<endl;
	}
	else if(h1<h2)
	{
		cout<<endl<<"------------------------------------------------------"<<endl;
		cout<<"  Please, Enter First Time Greater Than Second Time..."<<endl;
	}
}

class time
{
	public:
		int a;
		
		void ti()
		{
			do{
				menu();
				
				cout << "	Enter Your Choice: ";
				cin >> a;
				cout << endl;
				
				if(a==1)
				{
					Seconds();	
				}
				else if(a==2)
				{
					Hours();	
				}
				else if(a==3)
				{
					Minutes();	
				}
				else if(a==4)
				{
					Time();	
				}
				else if(a!=0)
				{
					cout<<"	Enter Valid Value..."<<endl;
				}
				
			}while(a!=0);
		}
};

int main()
{
	time t1;
	
	t1.ti();
	
	return 0;
}

