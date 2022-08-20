#include<iostream>
using namespace std;

void Arm_number()
{
	int n,g,i,count=0,j,sum,m;
	int a[100];
	
	cout <<" 	Enter Number: ";
	cin >> n;
	m=n;
	
			while(n!=0)
			{
				g=n%10;
				a[i]=g;
				i++;
				n=n/10;
				count++;
			}
			for(j=0;j<count;j++)
			{
				sum = sum + ( a[j]*a[j]*a[j] );
			}

			if(m==sum)
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	    Number is Armstrong."<<endl;
				cout<<"	---------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"	---------------------------------------"<<endl;
				cout<<"	    Number is not Armstrong."<<endl;
				cout<<"	---------------------------------------"<<endl;	
			}
}

class Number
{
	public:
		
		void nevil()
		{
			Arm_number();
		}	
};

int main()
{
	Number a1;
	
	a1.nevil();
	
	
	return 0;
}

