#include<iostream>
#include<string.h>
using namespace std;

class Auction
{
	private:
		int a,b,c,choice;
	
	public:
		
		void sell()
		{
			do{
				
				cout <<" Enter 1 Company Prize: ";
		    	cin >> a;
	 	  	   
			    cout <<" Enter 2 Company Prize: ";
			    cin >> b;
		
			    cout<<" Enter 3 Company Prize: ";
			    cin>>c;
			
			if(a>b)
			{
				if(a>c)
				{
					cout<<endl<<" First Company Win Successfully......."<<endl;
				}
				else
				{
					cout<<endl<<" Third Company Win Successfully......."<<endl;
				}
			}
			else
			{
				if(b>c)
				{
					cout<<endl<<" Second Company Win Successfully......."<<endl;
				}
				else
				{
					cout<<endl<<" Third Company Win Successfully......."<<endl;
				}
			}
			
			cout<<endl<<" Press 1 for Continue.."<<endl;
			cout<<" Press 0 for Exit.."<<endl;
			
			cout <<" Enter Choice: ";
			cin >> choice;
				
			}while(choice!=0);	
		}
};

int main()
{
	Auction a1;
	
	a1.sell();
	
	return 0;
}





