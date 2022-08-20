#include<iostream>
using namespace std;

void reverse()
{
	int n,d,sum=0;
	
	cout<<endl<<" Enter Number: ";
	cin >> n;
	
	while(n!=0)
	{
		d=n%10;
		sum=(sum*10)+d;
		n=n/10;
	}
	
	cout<<endl<<"---------------------------------------"<<endl;
	cout<<" Reverse of given Number is : "<<sum<<endl;
	cout<<"---------------------------------------"<<endl;
}

class Fastest_fingers_Fast
{
	public:
		
		void win()
		{
			reverse();
		}
};

int main()
{
	Fastest_fingers_Fast f1;
	
	f1.win();
	
	return 0;
}

