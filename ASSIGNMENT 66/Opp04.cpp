#include<iostream>
#include<string.h>
using namespace std;

class Cashew
{
	private:
		int co=123500, rs=78000, s_c , amt , p;
		
	public:
		
		void sell()
		{
			s_c = co*10;
			
			amt = rs*10;
			
			p = ((s_c*100)/co)/3;
		}
		
		void getdata()
		{
			sell();
			
			cout<<endl<<" This Company should Producing "<<s_c<<" Cashew."<<endl;
			
			cout<<endl<<"------------------------------------------------------------"<<endl;
			cout<<" Total Revenue with increment percentage is: " << p << "%"<<endl;
			cout<<"------------------------------------------------------------"<<endl;
		}
};

int main()
{
	Cashew c1;
	
	c1.getdata();
	
	return 0;
}

