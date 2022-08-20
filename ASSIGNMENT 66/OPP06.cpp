#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	private:
		int a=26, b=13, c, d, temp=0;
		
	public:
		
		void getdata()
		{
			d=(a*a)+(b*b);
			
			c = d/ 2;
			while(c!=temp)
			{
			temp = c;
			c = (d/temp + temp)/2;
			}

			
			cout <<"-----------------------------------------------------------------------------"<<endl;
			cout <<" The distance between the tree and the end of the rope on the ground is: "<<c<<endl;
			cout <<"-----------------------------------------------------------------------------"<<endl;
		}
};

int main()
{
	Distance d1;
	
	d1.getdata();
		
	return 0;
}


