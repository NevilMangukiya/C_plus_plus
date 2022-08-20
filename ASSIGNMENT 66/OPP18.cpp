#include<iostream>
using namespace std;

class Ayush
{
	private:
		int n, b_y, f;
		
	public:
		
		void setdata()
		{
			cout<<endl<<" Enter Any Number: ";
			cin>>n;
		}
		
		void getdata()
		{
			cout<<endl<<" RESULT: "<<endl;
			cout<<"========================================"<<endl;
			cout<<" 1. Add 8 in that number = " << n+8<<endl;
			cout<<" 2. Multiply it with 3 = " << (n+8)*3<<endl;
			cout<<" 3. Subtract 12 from it = " << ((n+8)*3)-12<<endl;
			cout<<" 4. Add another 5 into that = " << (((n+8)*3)-12)+5<<endl;
			cout<<" 5. Add your birth year in it = " << endl<<endl;
			cout<<" Enter Your Birthyear : ";
			cin>>b_y;
			cout<<endl<<" 5. Add your birth year in it = " << ((((n+8)*3)-12)+5)+b_y<<endl;
			cout<<" 6. Subtract current year from that = " << (((((n+8)*3)-12)+5)+b_y)-2022<<endl;
			
			f=(((((n+8)*3)-12)+5)+b_y)-2022;
			cout<<endl<<"-----------------------------------------------------------"<<endl;
			cout<<" Finally Answer is: "<<f<<endl;
			cout<<"-----------------------------------------------------------"<<endl;
			
			if(f%7==0)
			{
				cout<<endl<<"-----------------------------------------------------------"<<endl;
				cout<<" Yes, It is Divisible By 7."<<endl;
				cout<<"-----------------------------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"-----------------------------------------------------------"<<endl;
				cout<<" No, It isn't Divisible By 7."<<endl;
				cout<<"-----------------------------------------------------------"<<endl;
			}
			
		}
};

int main()
{
	Ayush a1;
	
	a1.setdata();
	a1.getdata();
	
	return 0;
}







