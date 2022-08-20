#include<iostream>
using namespace std;

void velocity()
{
	int b1,b2;
	int dis=1933,t1=40,t2=46;
	
	b1=dis/t1;
	b2=dis/t2;
	
	cout<<endl<<" Velocity of "<<endl;
	cout<<"================================================"<<endl;
	cout<<" Bus b1 = "<<b1<<endl;
	cout<<" Bus b2 = "<<b2<<endl;
}

class Bus
{
	public:
		
		void getdata()
		{
			velocity();
		}
};

int main()
{
	Bus b1;
	
	b1.getdata();
	
	return 0;
}




