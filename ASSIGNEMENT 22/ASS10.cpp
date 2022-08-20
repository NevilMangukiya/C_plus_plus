#include<iostream>
using namespace std;

int main()
{
	float cost,price,GST;
	
    cout << "Enter cost: ";
	cin >> cost;
	
	cout << "Enter price: ";
	cin >> price;
	
	GST = (((price - cost)*100)/cost);
	
	cout << endl << "GST AMOUNT IS = " << GST << "%"; 
}
