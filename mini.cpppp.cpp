#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Customer
{
	public:
	char name[100];
	char address[100];
	char phone[12];
	char from_date[20];
	char to_date[20];
	float payment_advance;
	int booking_id;
};


class Room
{
	public:
	char type[100];
	char stype[100];
	char ac[100];
	char name[100];
	int roomNumber;
	int rent;
	int status;
	
	class Customer cust;
	class Room addRoom(int);
	void searchRoom(int);
	void deleteRoom(int);
	void displayRoom(Room);
};

class Room rooms [100];
int count=0;

Room Room::addRoom (int rno)
{
	class Room room;
	room.roomNumber=rno;
	cout << "\n Enter your Name: ";
	cin >> room.name;
	cout << "\nType AC/Non-AC (Ac/Non Ac) : ";
	cin >> room.ac;
	cout << "\nType Comfort (S/N) : ";
	cin >> room.type;
	cout << "\nType Size (B/S) : ";
	cin >> room.stype;
	cout <<"\nDaily Rent : ";
	cin >> room.rent;
	room.status=0;
	 
	cout << endl << "Room  Added Successfully......";
	getch();
	return room;
}

void Room::searchRoom(int rno)
{
	int i,found=0;
	for(i=0;i<count;i++)
	{
		 if(rooms[i].roomNumber==rno)
		 {
		 	found=1;
		 	break;
		 }
	}
	if(found==1)
	{
		cout<<"Room Details\n";
		if(rooms[i].status==1)
		{
			cout<<"\nRoom is Reserved";
		}
		else
		{
			cout<<"\nRoom is available";
		}
			displayRoom(rooms[i]);
			getch();
	}
		else
		{
			cout<<"\nRoom not found";
			getch();
		}
}

void Room::displayRoom(Room tempRoom)
{
	cout << "\nRoom Number:       " << tempRoom.roomNumber;
	cout << "\nName:	          " << tempRoom.name;
	cout << "\nType AC/Non-AC     " << tempRoom.ac;
	cout << "\nType Comfort:      " << tempRoom.type;
	cout << "\nType Size:         " << tempRoom.stype;
	cout << "\nRent:              " << tempRoom.rent;
}

class Hotelmgnt:protected Room
{
	public:
		 void checkin();
		 void getAvailRoom();
     	 void searchCustomer(char *);
		 void checkOut(int);
		 void guestSummaryReport();
};

void Hotelmgnt::guestSummaryReport()
{
	if(count==0)
	{
		cout<<"\n No Guest in Hotel !!";
	}	

for(int i=0;i<count;i++)
 {
	if(rooms[i].status==1)
	{ 
		cout<<"\n Customer First Name : "<<rooms[i].cust.name;
		cout<<"\n Room Number : "<<rooms[i].roomNumber;
		cout<<"\n Address (only city) : "<<rooms[i].cust.address;
		cout<<"\n Phone : "<<rooms[i].cust.phone;
		cout<<"\n---------------------------------------";	
	}
 }
}

void Hotelmgnt::checkin()
{
	int i, found=0,rno;
	
	class Room room;
	
	cout << endl << "Enter Room number:  ";
	cin >> rno;
 
 for(i=0;i<count;i++)
  {
	if(rooms[i].roomNumber==rno)
	{
		found=1;
		break;
	}
}
	if(found==1)
	{
	if(rooms[i].status==1)
	{
		cout<<"\nRoom is already Booked";
		getch();
		return;
	}

	cout<<"\nEnter booking id: ";
	cin>>rooms[i].cust.booking_id;
	
	cout<<"\nEnter Customer Name (First Name): ";
	cin>>rooms[i].cust.name;
	
	cout<<"\nEnter Address (only city): ";
	cin>>rooms[i].cust.address;
	
	cout<<"\nEnter Phone: ";
	cin>>rooms[i].cust.phone;
	
	cout<<"\nEnter From Date: ";
	cin>>rooms[i].cust.from_date;
	
	cout<<"\nEnter to  Date: ";
	cin>>rooms[i].cust.to_date;
	
	
	cout<<"\nEnter Advance Payment: ";
	cin>>rooms[i].cust.payment_advance;
	
	rooms[i].status=1;
	
	cout<<"\n Customer Checked-in Successfully..";
	getch();
	}
}

void Hotelmgnt::getAvailRoom()
{
	int i,found=0;
  for(i=0;i<count;i++)
   {
		if(rooms[i].status==0)
	{
		displayRoom(rooms[i]);
		cout<<"\n\nPress enter for next room";
		found=1;
		getch();
	}
  }
	if(found==0)
	{
		cout<<"\nAll rooms are reserved";
	getch();
	}
}	
void Hotelmgnt::searchCustomer(char *pname)
{
int i,found=0;
for(i=0;i<count;i++)
{
	if(rooms[i].status==1 && stricmp(rooms[i].cust.name,pname)==0)
    {
	cout<<"\nCustomer Name: "<<rooms[i].cust.name;
	cout<<"\nRoom Number: "<<rooms[i].roomNumber;

	cout<<"\n\nPress enter for next record";
	found=1;
	getch();
    }
}
  if(found==0)
  {
	cout<<"\nPerson not found.";
	getch();
  }
}

void Hotelmgnt::checkOut(int roomNum)
{
int i,found=0,days,rno;
float billAmount=0;
for(i=0;i<count;i++)
{
	if(rooms[i].status==1 && rooms[i].roomNumber==roomNum)
	{
	//rno = rooms[i].roomNumber;
	found=1;
	//getch();
	break;
	}
}
	if(found==1)
	{
		cout<<"\nEnter Number of Days:\t";
		cin>>days;
		billAmount=days * rooms[i].rent;
		
		cout<<"\n\t######## CheckOut Details ########\n";
		cout<<"\nCustomer Name : "<<rooms[i].cust.name;
		cout<<"\nRoom Number : "<<rooms[i].roomNumber;
		cout<<"\nAddress : "<<rooms[i].cust.address;
		cout<<"\nPhone : "<<rooms[i].cust.phone;
		cout<<"\nTotal Amount Due : "<<billAmount<<" /";
		cout<<"\nAdvance Paid: "<<rooms[i].cust.payment_advance<<" /";
		cout<<"\n*** Total Payable: "<<billAmount-rooms[i].cust.payment_advance<<"/ only";
		
		rooms[i].status=0;
	}
	getch();
}

void manageRooms()
{
		class Room room;
		int choice,rno,i,flag=0;
		char ch;
		do
		{
			system("cls");
			cout << "\n### Manage Rooms ###";
			cout << "\n1. Add Room";
			cout << "\n2. Search Room";
			cout << "\n3. Back to Main Menu";
			cout << "\n\nEnter choice: ";
			cin >> choice;
			
		switch(choice)
		{
		case 1:
		cout<<"\nEnter Room Number: ";
		cin>>rno;
		i=0;
		for(i=0;i<count;i++)
		{
			if(rooms[i].roomNumber==rno)
			{	
				flag=1;
			}
		}
		if(flag==1)
		{
			cout<<"\nRoom Number is Present.\nPlease enter unique Number";
			flag=0;
			getch();
		}
		else
		{
			rooms[count]=room.addRoom(rno);
			count++;
		}
		break;
		
		case 2:
		cout << "\nEnter room number: ";
		cin >> rno;
		room.searchRoom(rno);
		break;
		
		case 3:
			break;
			default:
			cout<<"\nPlease Enter correct option";
			break;
		}
	}    while(choice!=3);
}

int main()
{
		class Hotelmgnt Hm;
		int i,j,choice,rno;
		char ch;
		char pname[100];
		
		system("cls");
		
		do
		{
		system("cls");
		cout << "*******************************************************\n";
		cout << "*********** Hotel Booking and Management **************\n";
		cout << "*******************************************************\n";

		cout << "\n\t\t1. Manage Rooms";
		cout << "\n\t\t2. Check-In Room";
		cout << "\n\t\t3. Available Rooms";
		cout << "\n\t\t4. Search Customer";
		cout << "\n\t\t5. Check-Out Room";
		cout << "\n\t\t6. Guest Summary Report";
		cout << "\n\t\t7. Exit";
		cout << "\n\n\t\tEnter Choice: ";
		cin >> choice;
		switch(choice)
		{
		case 1:
				manageRooms();
				break;
				
	    case 2:
				if(count==0)
				{
					cout<<"\nRooms data is not available.\nPlease add the rooms first.";
					getch();
				}
				else
					Hm.checkin();
				break;
		
		case 3:
				if(count==0)
				{
					cout<<"\nRooms data is not available.\nPlease add the rooms first.";
					getch();
				}
				else
				 	Hm.getAvailRoom();
				break;
		
		case 4:
				if(count==0)
				{
					cout<<"\nRooms are not available.\nPlease add the rooms first.";
					getch();
				}
				else
				{
					cout<<"Enter Customer Name: ";
					cin>>pname;
					Hm.searchCustomer(pname);
				}
				break;
		
		case 5:
				if(count==0)
				{
					cout<<"\nRooms are not available.\nPlease add the rooms first.";
					getch();
				}
				else
				{
					cout<<"Enter Room Number : ";
					cin>>rno;
					Hm.checkOut(rno);
				}
				break;
		
		case 6:
				Hm.guestSummaryReport();	
				break;
		
		case 7:
				break;
	
		default:
		cout<<"\nPlease Enter correct option";
	
	    break;
    }
}while(choice!=7);

getch();
return 0;
}
