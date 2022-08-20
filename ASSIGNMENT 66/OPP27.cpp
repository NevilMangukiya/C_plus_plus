#include<iostream>
#include<string.h>
using namespace std;

class RBI
{
	public:
		
		void Interest()
		{
			cout<<endl<<" Pre-defines a Rate of Interest is: 7%"<<endl;
		}
};

class SBI:public RBI
{
	public:
		
		void Interest()
		{
			cout<<endl<<" SBI"<<endl;
			cout<<" Pre-defines a Rate of Interest is: 7%"<<endl;
			cout<<"============================================"<<endl;
		}
};

class Baroda:public RBI
{
	public:
		
		void Interest()
		{
			cout<<endl<<" BARODA"<<endl;
			cout<<" Pre-defines a Rate of Interest is: 8%"<<endl;
			cout<<"============================================"<<endl;
		}
};

class Varachha:public RBI
{
	public:
		
		void Interest()
		{
			cout<<endl<<" VARACHHA"<<endl;
			cout<<" Pre-defines a Rate of Interest is: 7.5%"<<endl;
			cout<<"============================================"<<endl;
        } 
};

int main()
{
	SBI b1;
	Baroda b2;
	Varachha v1;
	
	b1.Interest();
	b2.Interest();
	v1.Interest();
	
	return 0;
}

