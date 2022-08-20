#include<iostream>
#include<string.h>
using namespace std;

class Nayan
{
	private:
		char a[100];
		int b[100];
		int i,j,c;
		
	public:
		
		Nayan()
		{
			cout<<endl<<"Enter Any Msg: ";
			fflush(stdin);
			cin>>this->a;
		}
		
		void frequency()
		{
			for(i=0;a[i]!=NULL;i++)
			{
				c=1;
				for(j=i+1;a[j]!=NULL;j++)
				{
					if(a[i]!='1')
					{
						if(a[i]==a[j])
						{
							c++;
							a[j]='-1';
						}
					}
					b[i]=c;
				}
			}
			
			cout<<endl<<endl<<"------------------------------------------------------"<<endl;
			for(i=0;a[i]!=NULL;i++)
			{
				if(a[i]!='1')
				{
					cout<<" Frequency of "<<this->a[i]<<" is "<<this->b[i]<<endl;
				}
			}
			cout<<"------------------------------------------------------"<<endl;
		}
}; 

int main()
{
	Nayan n1;
	
	n1.frequency();
	
	return 0;
}

