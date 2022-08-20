#include<iostream>
#include<string.h>
using namespace std;

class Logic
{
	private:
		int n;
		
	public:
		
		void setdata()
		{
			cout<<endl<<" Enter Value: ";
			cin>>n;
		}
		
		void menu()
		{
			cout<<endl<<"	>>>>>>>>>>>MENU<<<<<<<<<<<"<<endl;
//			cout<<"	=========================="<<endl;
			cout<<"	|| [1] Increment        ||"<<endl;
			cout<<"	|| [2] Decremnet        ||"<<endl;
			cout<<"	|| [0] Exit             ||"<<endl;
//			cout<<"	=========================="<<endl<<endl;
		}
		
		void incre()
		{
			n+=1;
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<" Increment Value is: "<<n<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		
		void decre()
		{
			n-=1;
			cout<<endl<<"---------------------------------------------------"<<endl;
			cout<<" Decremnet Value is: "<<n<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
};

int main()
{
	Logic L1;
	int c;
	
	L1.setdata();
	
	do{
		L1.menu();
		
		cout<<endl<<" Enter Choice: ";
		cin>>c;
		
		if(c==1)
		{
			L1.incre();
		}
		else if(c==2)
		{
			L1.decre();
		}
		else if(c!=0)
		{
			cout<<endl<<" Please Enter valid Value.........."<<endl;
		}
		
	}while(c!=0);
	
	return 0;
}
