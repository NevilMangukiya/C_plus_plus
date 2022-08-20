
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class String
{
	private:
		char a[100], b[100];
		int c=0,t=0, i, j;
		
	public:
		
		String()
		{
			cout<<endl<<" Enter historical words: ";
			fflush(stdin);
			gets(this->a);
		}
		
		void solution()
		{
			
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<" Actual Word is: "<<strrev(a)<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
};

int main()
{
	String s1;
	
	s1.solution();
	
	return 0;
}

