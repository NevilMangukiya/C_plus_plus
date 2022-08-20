#include<iostream>
#include<string.h>
using namespace std;

class Box
{
	public:
		int vo;
		
		Box(int l, int w, int h)
		{
			vo=l*w*h;
			
			cout<<endl<<"---------------------------------------------"<<endl;
			cout<<" Volume of Box is: "<< vo <<endl;
			cout<<"---------------------------------------------"<<endl;
			
			if(vo%2==0)
			{
				cout<<endl<<"---------------------------------------------"<<endl;
				cout<<" Volume of Box is Even. "<<endl;
				cout<<"---------------------------------------------"<<endl;
			}
			else
			{
				cout<<endl<<"---------------------------------------------"<<endl;
				cout<<" Volume of Box is Odd. "<<endl;
				cout<<"---------------------------------------------"<<endl;
			}
		}
};

int main()
{

	int length, width, height;
	
	cout <<" Enter length: ";
	cin >> length;
	cout << " Enter width: ";
	cin >> width;
	cout <<" Enter height: ";
	cin >> height;
	
	Box b1(length, width, height);
	
	return 0;
}


