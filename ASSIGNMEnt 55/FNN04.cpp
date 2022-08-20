#include<iostream>
using namespace std;

void setdata()
{
	int a[100],b[100],sum;
	int n,i,c,ave=0;
	
	cout<<endl<<" Enter How Many Elements: ";
	cin>>n;
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
	
	
	cout << endl << " Cube of All Elements: ";
	cout << endl << "------------------------------------------------------"<<endl;
	for(i=0;i<n;i++)
	{
		sum=a[i]*a[i]*a[i];
		ave+=a[i]*a[i]*a[i];
		b[i]=sum;
	}
	c=ave/n;
	for(i=0;i<n;i++)
	{
		cout<<"b["<<i<<"]: ";
		cout<<b[i]<<endl;
	}
	
	cout << endl <<"-------------------------------------------------------"<<endl;
	cout << " Average of All Cube Numbers is: "<<c<<endl;
	cout << "-------------------------------------------------------"<<endl;
	
	cout << endl << " Array Kind is:"<<endl;
    cout << endl <<"------------------------------------------"<<endl;
	if(c>22&&c<=35)
	{
		cout<<" Tighter"<<endl;
	}
	else if(c>35&&c<=50)
	{
		cout<<" Balanced"<<endl;
	}
	else if(c>50)
	{
		cout<<" Toxic"<<endl;
	}
	else if(c<22)
	{
		cout<<" Looser"<<endl;
	}
}

class Udf
{
	public:
		void Getdata()
		{
			setdata() ;
		}
		
};

int main()
{
	Udf u1;
	
	u1.Getdata();
	
	return 0;
}

