#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	private:
		int f, s, c, d, temp=0, t;
		
	public:
		
		void setdata()
		{
			cout <<" Enter First Side: ";
			cin >> f;
			
			cout <<" Enter Second Side: ";
			cin >> s;
			
			cout <<" Enter Third Side: ";
			cin >> t;
		}
		
		void getdata()
		{
			d=(f*f)+(s*s);
			
			c = d/ 2;
			while(c!=temp)
			{
			temp = c;
			c = (d/temp + temp)/2;
			}

			if(c==t)
			{
				cout<<endl<<"------------------------------------------------------------"<<endl;
				cout<<" Triangle is right."<<endl;
				cout<<"------------------------------------------------------------"<<endl;
			}
			else if(t<=c)
			{
				cout<<endl<<"------------------------------------------------------------"<<endl;
				cout<<" Triangle is obtuse."<<endl;
				cout<<"------------------------------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"------------------------------------------------------------"<<endl;
				cout<<" Triangle is acute."<<endl;
				cout<<"------------------------------------------------------------"<<endl;
			}
		}
};

int main()
{
	Distance d1;
	
	d1.setdata();
	d1.getdata();
		
	return 0;
}


