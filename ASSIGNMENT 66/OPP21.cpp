#include<iostream>
#include<string.h>
using namespace std;

class Characters
{
	private:
		char i;
		int n=0;
	
	public:
		
		Characters()
		{
			cout<<endl;
			for(i='a';i<='z';i+=3)
			{
				n+=int(i);
				cout<<" Word "<<i<<" = "<<int(i)<<endl;
			}
			
		}
		
		void solution()
		{
			cout<<endl<<"-------------------------------------------------"<<endl;
			cout<<" Total is: "<<n<<endl;
			cout<<"-------------------------------------------------"<<endl;
			
			if(n%2==0)
			{
				cout<<endl<<" Even....."<<endl;
			}
			else
			{
				cout<<endl<<" Odd....."<<endl;
			}
		}
};

int main()
{
	Characters c1;
	
	c1.solution();
	
	return 0;
	
}
	

