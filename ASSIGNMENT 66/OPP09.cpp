#include<iostream>
using namespace std;

class Gst
{
	private :
		 int p,g,to_g;
		 
	public:
		 void Setdata()
		 {
		 	cout << "Enter Your amount: ";
		 	cin >> p;
		 	
		 }
		 
		 void Getdata()
		 {
		 	 if(p<500)
		 	 {
		 	      g=(p*5)/100;	
			 }
			 
			 else if(p>=500 && p<=1000)
		 	 {
		 	      g=(p*12)/100;	
			 }
			 else if(p>1000 && p<=2000)
		 	 {
		 	      g=(p*18)/100;	
			 }
			 
			 else 
		 	 {
		 	      g=(p*28)/100;	
			 }
			 
			 to_g=p+g;
			 
			 cout << endl << "Gst amount is " << g << endl;
			 cout << endl << "Total included Gst amount is " << to_g << endl;
		 }
};

int main()
{
	Gst g1;
	
	g1.Setdata();
	g1.Getdata();
	
	return 0;
	
}
