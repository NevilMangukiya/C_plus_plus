#include<iostream>
using namespace std;

void menu()
{
			cout << endl <<" >>>>>>>>>>>MENU<<<<<<<<<<<" << endl;
			cout <<" =============================="<< endl;
			cout <<"  [1] Area of Circle       " << endl;
			cout <<"  [2] Perimeter of Circle  " << endl;
			cout <<"  [3] Area of Square       " << endl;
			cout <<"  [4] Area of Rectangle    " << endl;
			cout <<"  [5] Area of Triangle     " << endl;
			cout <<"  [6] Area of Sphere       " << endl;
			cout <<"  [0] Exit                 " << endl;
			cout <<" ==============================" << endl << endl;
}

void Area_of_Circle()
{
	int radius;
	const float PI=3.14;
	float c;
	
	cout << endl <<" Enter Radius: ";
	cin  >> radius;
	
	c=PI*(radius*radius);
	
	cout<<endl<<"---------------------------------------------"<<endl;
	cout<<" Area of Circle is: "<< c <<endl;
	cout<<"---------------------------------------------"<<endl;
}

void Perimeter_of_Circle()
{
	int radius;
	const float PI=3.14;
	float c;
	
	cout << endl <<" Enter Radius: ";
	cin >> radius;
	
	c=2*(PI*radius);
	
	cout << endl <<"---------------------------------------------"<<endl;
	cout <<" Perimeter of Circle is: "<< c <<endl;
	cout <<"---------------------------------------------"<<endl;
}

void Area_of_Square()
{
	int l;
	int sq;
	
	cout <<" Enter Length: ";
	cin >> l;
	
	sq=l*l;
	
	cout<<endl<<"---------------------------------------------"<<endl;
	cout<<" Area of Square is: "<< sq <<endl;
	cout<<"---------------------------------------------"<<endl;
}

void Area_of_Rectangle()
{
	int l,w;
	int r;
	
	cout << " Enter Length: ";
	cin >> l;
	cout <<" Enter Width: ";
	cin >> w;
	
	r=l*w;
	
	cout<<endl<<"---------------------------------------------"<<endl;
	cout<<" Area of Rectangle is: " << r <<endl;
	cout<<"---------------------------------------------"<<endl;
}

void Area_of_Triangle()
{
	int b,h;
	float t;
	
	cout << endl <<" Enter Base: ";
	cin >> b;
	cout << endl <<" Enter Heigth: ";
	cin >> h;
	
	t=0.5*(b*h);
	
	cout<<endl<<"---------------------------------------------"<<endl;
	cout<<" Area of Triangle is: "<<t<<endl;
	cout<<"---------------------------------------------"<<endl;
}

void Area_of_Sphere()
{
	int r;
	const float PI=3.14;
	float s;
	
	cout <<" Enter Radious: ";
	cin >> r;
	
	s=4*PI*(r*r);
	
	cout<<endl<<"---------------------------------------------"<<endl;
	cout<<" Area of Sphere is: "<<s<<endl;
	cout<<"---------------------------------------------"<<endl;
} 

class Geometry_problems
{
	public:
		int choice;
		
		void solution()
		{
			do{
				menu();
				
				cout << "	Enter Your Choice: ";
				cin >> choice;
				cout << endl;
				
				if(choice==1)
				{
					Area_of_Circle();	
				}
				else if(choice==2)
				{
					Perimeter_of_Circle();	
				}
				else if(choice==3)
				{
					Area_of_Square();	
				}
				else if(choice==4)
				{
					Area_of_Rectangle();	
				}
				else if(choice==5)
				{
					Area_of_Triangle();	
				}
				else if(choice==6)
				{
					Area_of_Sphere();	
				}
				else if(choice!=0)
				{
					cout<<"	Enter Valid Value..."<<endl;
				}
				
			}while(choice!=0);
		}
};

int main()
{
	Geometry_problems g1;
	
	g1.solution();
	
	return 0;
}








