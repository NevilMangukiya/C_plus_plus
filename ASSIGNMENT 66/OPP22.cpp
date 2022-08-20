#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	public:
		int hotel_id;
	    char hotel_name[100];
	    char hotel_type[100];
		int hotel_staff_size;
		int hotel_room_size;
		int hotel_establish_year;
		char hotel_country[100];
		int hotel_rating_type;
		char hotel_website[100];
			    
	public:
		
		void setdata()
		{
			cout<<endl<<" Enter Id: ";
			cin>>hotel_id;
			
			cout<<" Enter Name: ";
			cin >> hotel_name;
			
			cout<<" Enter Type: ";
			cin >> hotel_type;
			
			cout<<" Enter Staff Size: ";
			cin>>hotel_staff_size;
			
			cout<<" Enter Room Size: ";
			cin>>hotel_room_size;
			
			cout<<" Enter Establish Year: ";
			cin >> hotel_establish_year;
			
			cout << " Enter Country: ";
			cin >> hotel_country;
			
			cout<<" Enter Rating Type: ";
			cin>>hotel_rating_type;
			
			cout<<" Enter Website: ";
			cin >> hotel_website;
		}
		
		void getdata()
		{
			cout<<endl<< endl << " HOTEL INFORMATION: "<<endl;
			cout<<"============================================"<<endl;
			cout<<" Id: "<<hotel_id<<endl;
			cout<<" Name: "<<hotel_name<<endl;
			cout<<" Type: "<<hotel_type<<endl;
			cout<<" Staff Size: "<<hotel_staff_size<<endl;
			cout<<" Room Size: "<<hotel_room_size<<endl;
			cout<<" Establish Year: "<<hotel_establish_year<<endl;
			cout<<" Country: "<<hotel_country<<endl;
			cout<<" Rating Type: "<<hotel_rating_type<<endl;
			cout<<" Website: "<<hotel_website<<endl;
			cout<<"============================================="<<endl;
		}
};

int main()
{
	Hotel h[100];
	int n,i;
	
	cout<<endl<<" Enter How Many Hotel: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		h[i].setdata();
	}
	
	for(i=0;i<n;i++)
	{
		h[i].getdata();
	}
	
	return 0;
}

