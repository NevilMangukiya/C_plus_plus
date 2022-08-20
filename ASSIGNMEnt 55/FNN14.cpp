
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void Kaveri()
{
	int l=10, w=4;
	int c;
	
	c=(l*w)+8;
	
	cout<<endl<<" A window on a side wall have a dimension of 10x4 feet."<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<" For Covering Window is: "<<endl;
	cout<<" Kaveri needs "<< c <<" area..."<<endl;

}

class curtain
{
	public:
		
		void getdata()
		{
			Kaveri();
		}
};

int main()
{
	curtain c1;
	
	c1.getdata();
	
	return 0;
}


