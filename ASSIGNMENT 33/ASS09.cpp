
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class String
{
	private:
		char a[100], b[100];
		int i, j=0;
		
	public:
		
		String()
		{
			cout<<endl<<" Enter Your Username: ";
			fflush(stdin);
			gets(this->a);
		}
		
		void solution()
		{
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
				{
					b[j]=a[i];
					j++;
				}
			}
			
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<" Your Name is: "<<this->b<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
};

int main()
{
	String s1;
	
	s1.solution();
	
	return 0;
}

