#include<iostream>
#include<string.h>
using namespace std;

class Time
{
	private:
		int t1, m1;
		
	public:
		
		Time()
		{
			cout <<" Enter Hours( 24 Hr ):";
			cin >>t1;
			cout <<" Enter Minutes:";
			cin >>m1;
		}
		
		void getdata()
		{
			if(t1<=12)
			{
				cout<<endl<<"----------------------------------------------"<<endl;
				cout<<" Time ( 12 Hr )= "<< t1 <<" : "<< m1 <<endl;
				cout<<"----------------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"----------------------------------------------"<<endl;
				cout<<" Time ( 12 Hr )= "<< t1-12 <<" : "<< m1 <<endl;
				cout<<"----------------------------------------------"<<endl;
			}
		}
};

int main()
{
	Time t1;
	
	t1.getdata();
	
	return 0;
}

