#include<iostream>
#include<string.h>
using namespace std;

class Indian_Airport
{
	private:
		char a[100],v1[100],c1[100],s1[100],d1[100];
		int i,v=0,c=0,s=0,d=0;
		
	public:
		
		Indian_Airport()
		{
			cout<<endl<<" Enter Massage: ";
			cin>>this->a;
		}
		
		void solution()
		{
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
				   a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
				{
				   	v1[v]=a[i];
				   	v++;
			    }
			    
			    else
				{
						c1[c]=a[i];
				   		c++;
				}
				
			    if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
			    {
			    	
				}
				else if(a[i]>='0'&&a[i]<='9')
			    {
			    	d1[d]=a[i];
				   	d++;
				}
				else
				{
					s1[s]=a[i];
				   	s++;
				}
			}
			
			cout<<endl<<" Vowels          = ";
			for(v=0;v1[v]!='\0';v++)
			{
				cout<<v1[v]<<" , ";
			}
			
			cout<<endl<<" Consonants      = ";

			for(c=0;c1[c]!='\0';c++)
			{
				if(c1[c]>='b'&&c1[c]<='z')
			    {
			    	cout<<c1[c]<<" , ";
				}
				else if(c1[c]>='0'&&c1[c]<='9')
			    {
			    
				}
				else
				{
				
				}
					
			}
			
			cout<<endl<<" Digits          = ";
			for(d=0;d1[d]!='\0';d++)
			{
				cout<<d1[d]<<" , ";
			}
			
			cout<<endl<<" Special Symbols = ";
			for(s=0;s1[s]!='\0';s++)
			{
				cout<<s1[s]<<" , ";
			}
		}
};

int main()
{
	Indian_Airport i1;
	
	i1.solution();
	
	return 0;
}

