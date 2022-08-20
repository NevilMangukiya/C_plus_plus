#include<iostream>
#include<string.h>
using namespace std;

class Marks
{
	private:
		int a,b;
		
	public:
		
		Marks()
		{
			cout <<" Enter Original Marks: ";
			cin >> a;
			cout << endl << " Enter Mark Which You Want Replace with Original Marks: ";
			cin >> b;
			
			a += b;
			b=a-b;
			a=a-b;
			
			cout<<endl<<" RESULT: "<<endl;
			cout<<"========================================="<<endl;
			cout<<" Original Mark is: "<<a<<endl;
			cout<<" Fake Mark is: "<<b<<endl;
			cout<<"========================================="<<endl;
		}
};

int main()
{
	Marks m1;
	
	return 0;
}

