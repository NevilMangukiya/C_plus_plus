#include<iostream>
using namespace std;

class Shape
{
	protected :
		  float width,height;
		  
	public :
		Shape()
		{
			this->width=5;
			this->height=3;
		}
//		void getdata()
//		{
//			cout << "Width"
//		}
};

class rectangle : public Shape
{
	int area;
	void area1()
	{
	   area(width*height);
    }
};

int main()
{
	rectangle area;
	
	
	re.Shape();
}
