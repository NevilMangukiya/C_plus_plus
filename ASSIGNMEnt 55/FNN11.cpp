#include<iostream>
using namespace std;

void result()
{
	int INDIA, US, china;
	
	INDIA=1237117;
	US=480893;
	china=915000;
	
	if(INDIA>US)
	{
		if(INDIA>china)
		{
			cout<<endl<<" India have largest Army strength....."<<endl;
		}
		else
		{
			cout<<endl<<" China have largest Army strength......"<<endl;
		}
	}
	else
	{
		if(US>china)
		{
			cout<<endl<<" US have largest Army strength."<<endl;
		}
		else
		{
			cout<<endl<<" China have largest Army strength."<<endl;
		}
	}
}

class Country
{
	public:
		
		void getData()
		{
			result();
		}
};

int main()
{
	Country c1;
	
	c1.getData();
	
	return 0;
}

