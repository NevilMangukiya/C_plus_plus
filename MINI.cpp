#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

using namespace std;

class Hotel
{
	int room_no;
	char name[30];
	char address[50];
	int contact;
	
	public :
		void main_menu();
		void add();
		void display();
		void rooms();
		void edit();
		int check(int);
		void modify(int);
		void delete_rec(int);
		void bill(int);\
};

void Hotel::main_menu()
{
	int choice;
	while(choice!=5)
	{
		cout << endl <<"\t\t\t***************************************";
		cout << endl <<"\t\t\t      HOTEL BOOKING AND MANAGEMENT     ";
		cout << endl <<"\t\t\t              * MAIN MENU *";
    	cout << endl <<"\t\t\t***************************************";
	    cout<<"\n\n\n\t\t\t1.Book A Room";
		cout<<"\n\t\t\t2.Customer Records";
		cout<<"\n\t\t\t3.Rooms Allotted";
		cout<<"\n\t\t\t4.Edit Record";
		cout<<"\n\t\t\t5.Exit";
		cout<<"\n\n\t\t\tEnter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				   add();
				   break;
				   
			case 2:
				   display();
				   break;
		
			case 3:
				   rooms();
				   break;
			
		   case 4:
				   edit();
				   break;		
		
		
			case 5:
				   break;	
				  
		    default :
			         cout << "INVALID CHOCICE.....!!";	
		}
	}
}

void Hotel::add()
{
	 int r,flag;
	 
	 
	 	cout<<"\n Enter Customer Detalis";
		cout<<"\n ----------------------";
		cout<<"\n\n Room no: ";
		cout<<"\n Total no. of Rooms - 50";
		cout<<"\n Ordinary Rooms from 1 - 30";
		cout<<"\n Luxuary Rooms from 31 - 45";
		cout<<"\n Royal Rooms from 46 - 50";
		cout << endl << "\n Enter The Room number you want to stay in :- "<<endl;
		cin>>r;
		
		flag=check(r);
		
		if(flag)
		cout<<"\n Sorry..!!!Room is already booked";
		
		else
		{
		
		room_no=r;
		cout<<" Name: ";
		cin>>name;
		cout<<" Address: ";
		cin>>address;
		cout<<" Phone No: ";
		cin>>contact;
		
    	cout << ((char*)this,sizeof(Hotel));
		cout<<"\n Room is booked...!!!";
		
		cout << endl << "Press any key to continue....!!";

}
}

void Hotel::display()
{
	int r,flag;
	
	cout<<"\n Enter room no. for a particular customer`s details :- "<<endl;
	cin>>r;

//	while(!0fin.eof())
	{
	
//	fin.read((char*)this,sizeof(hotel));
	if(room_no==r)
	{
	
    cout<<"\n Cusromer Details";
	cout<<"\n ----------------";
	cout<<"\n\n Room no: "<<room_no;
	cout<<"\n Name: "<<name;
	cout<<"\n Address: "<<address;
	cout<<"\n Phone no: "<<contact;
	flag=1;
//	break;

}
}
   if(flag==0)
   cout << endl  << "Sorry Room number is not found... ";
   cout << endl << endl << "Press any key to continue.....";
	
}

void Hotel::rooms()
{
	ifstream fin("Record.dat",ios::in);
	cout<<"\n\t\t\t    List Of Rooms Allotted";
	cout<<"\n\t\t\t    ----------------------";
	cout<<"\n\n Room No.\tName\t\tAddress\t\t\t\tPhone No.\n";
	
	while(!fin.eof())
	{
	
//	fin.read((char*)this,sizeof(hotel));
	cout<<"\n\n "<<room_no<<"\t\t"<<name;
	cout<<"\t\t"<<address<<"\t\t"<<contact;
	
	}
	
	cout<<"\n\n\n\t\t\tPress any key to continue.....!!";
	getch();
	fin.close();

}

void Hotel::edit()
{
	int choice,r;
	cout<<"\n EDIT MENU";
	cout<<"\n ---------";
	cout<<"\n\n 1.Modify Customer Record";
	cout<<"\n 2.Delete Customer Record";
	cout<<"\n 3. Bill Of Customer";
	cout<<"\n Enter your choice: ";
	
	cin>>choice;
//	  system("cls");
	
	cout<<"\n Enter room no: " ;
	cin>>r;
	
	switch(choice)
	{
	
	case 1:	modify(r);
	break;
	
	case 2:	delete_rec(r);
	break;
	
	case 3: bill(r);
	break;
	
	default: cout<<"\n Wrong Choice.....!!";
	
	}
	cout<<"\n Press any key to continue....!!!";
}

int Hotel::check(int r)
{
	 int flag=0;
	 
	ifstream fin("Record.dat",ios::in);

	while(!fin.eof())
	{
	
	fin.read((char*)this,sizeof(Hotel));
	if(room_no==r)
	{
	
	flag=1;
	break;
	
	}
	
	}
	
	fin.close();
	return(flag);
}
	 
void Hotel::modify(int r)
{
	  long pos,flag=0;
	  
	  fstream file("Record.dat",ios::in|ios::out|ios::binary);

		while(!file.eof())
		{
		
		pos=file.tellg();
		file.read((char*)this,sizeof(Hotel));
		
		if(room_no==r)
		{
		
		cout<<"\n Enter New Details";
		cout<<"\n -----------------";
		cout<<"\n Name: ";
		cin>>name;
		cout<<" Address: ";
		cin>>address;
		cout<<" Phone no: ";
		cin>>contact;
		file.seekg(pos);
		file.write((char*)this,sizeof(Hotel));
		cout<<"\n Record is modified....!!";
		flag=1;
		break;
		
		}

		}

if(flag==0)
cout<<"\n Sorry Room no. not found or vacant...!!";
file.close();

}

void Hotel::delete_rec(int r)
{

int flag=0;
char ch;
ifstream fin("Record.dat",ios::in);
ofstream fout("temp.dat",ios::out);

while(!fin.eof())
{

fin.read((char*)this,sizeof(Hotel));
if(room_no==r)

{

cout<<"\n Name: "<<name;
cout<<"\n Address: "<<address;
cout<<"\n Pone No: "<<contact;
cout<<"\n\n Do you want to delete this record(y/n): ";
cin>>ch;

if(ch=='n')
fout.write((char*)this,sizeof(Hotel));
flag=1;

}

else
fout.write((char*)this,sizeof(Hotel));

}

fin.close();
fout.close();

if(flag==0)
cout<<"\n Sorry room no. not found or vacant...!!";

else
{

remove("Record.dat");
rename("temp.dat","Record.dat");

}

}

void Hotel::bill(int r)
{
Hotel h1;
ifstream f1;
 f1.open("record.dat",ios::in|ios::binary);

if(!f1)
 cout<<"cannot open";

 else
 {

  f1.read((char*)&h1,sizeof (Hotel));
  while(f1)

  {

  f1.read((char*)&h1,sizeof(Hotel));

  }

  if (h1.room_no == r)
  {

  if(h1.room_no>=1&&h1.room_no<=30)
  cout<<"your bill = 2000";

  else if (h1.room_no>=35&&h1.room_no<=45)
  cout<<"your bill = 5000" ;

  else
  cout<<"your bill = 7000";

  }

  else
  { cout<<"room no. not found";}

  }

  f1.close();
  getch();

}

int main()
{
	Hotel h;
	
	cout << "\t\t\t**************************************************" ;
    cout << "\t\t\t        * HOTEL MANAGEMNET PROJCET *";
    cout << "\t\t\t**************************************************" ;
    
    h.main_menu();
    
    return 0;
}
