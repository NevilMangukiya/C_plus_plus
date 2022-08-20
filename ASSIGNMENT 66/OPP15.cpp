#include<iostream>
#include<string.h>
using namespace std;

//Number of Cells	
//72
//Power	
//330 W

class Solar
{
	private:
		int cell, power, price, d_c=1000, o_c=150, f_c=1500, total;
		
	public:
		
		Solar()
		{
			cout <<" Enter Number of Cells: ";
			cin >> cell;
			cout <<" Enter Power: ";
			cin >> power;
		}
		
		void getdata()
		{
			if(cell<=70)
			{
				price=15000;
			}
			else if(cell<=150)
			{
				price=25000;
			}
			else
			{
				price=45000;
			}
			
			total=price+((price*20)/100)+d_c+o_c+f_c;

			cout<<endl<<"====================================="<<endl;
			cout<<" Total Coast is: "<<price<<endl;
			cout<<" Total GST is: "<<(price*20)/100<<endl;
			cout<<" Total Delivary Charge is: "<<d_c<<endl;
			cout<<" Total Other Charge is: "<<o_c<<endl;
			cout<<" Total Fitting Charge is: "<<f_c<<endl;
			cout<<"====================================="<<endl;
			cout<<" Total Coast is: "<<total<<endl;
			cout<<"====================================="<<endl;
			
		}
};

int main()
{
	Solar s1;
	
	s1.getdata();
	
	return 0;
}

