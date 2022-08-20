
#include<iostream>
#include<string.h>
using namespace std;

class math
{
	private:
		int a=6, b=13, c, d, temp=0;
		
	public:
		
		void setdata()
		{
			cout <<" First Side is "<< a <<"cm." <<endl;
			cout <<" First Side is "<< b <<"cm." <<endl;
		}
		
		void getdata()
		{
			d=(a*a)+(b*b);
			
			c = d/ 2;
			while(c!=temp)
			{
			temp = c;
			c = (d/temp + temp)/2;
			}

			
			cout<<endl<<"------------------------------------------------------------"<<endl;
			cout<<" So, Third Side is: "<< c <<endl;
			cout<<"------------------------------------------------------------"<<endl;
		}
};

int main()
{
	math m1;
	
	m1.setdata();
	m1.getdata();
		
	return 0;
}






