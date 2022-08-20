#include<iostream>
using namespace std;

class House
{
	public:
		
		void getdata()
		{
			cout<<endl<<" WELCOME.."<<endl;
			cout<<" Hello, It is My House.."<<endl;
		}
};

class Kitchen: public House
{
	public:
		
		void getdata1()
		{
			getdata();
			cout<<endl<<" Hi, It is Kitchen."<<endl;
		}
};

class Bedroom: public House
{
	public:
		
		void getdata2()
		{
			cout<<endl<<" Hi, It is Bedroom."<<endl;
		}
};

class Backyard: public House
{
	public:
		
		void getdata3()
		{
			cout<<endl<<" Hi, It is Backyard."<<endl;
		}
};

class Dining_Table: public Kitchen
{
	public:
		
		void getdata4()
		{
			getdata1();
			cout<<" Here is Dining Table."<<endl;
		}
};

class Bathroom: public Bedroom
{
	public:
		
		void getdata5()
		{
			getdata2();
			cout<<" Here is Bathroom."<<endl;
		}
};

class Garage: public Backyard
{
	public:
		
		void getdata6()
		{
			getdata3();
			cout<<" Here is Garage."<<endl;
		}
};

int main()
{
	Dining_Table d1;
	Bathroom b1;
	Garage g1;
	
	d1.getdata4();
	b1.getdata5();
	g1.getdata6();
	
	return 0;
}


