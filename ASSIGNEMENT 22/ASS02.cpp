#include<iostream>
using namespace std;
int main()
{
	int n,evensum=0,evencount=0,odd,i,evenavg
	;
	
	cout << "Enter Any Numbers:  ";
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
	 if(i%2==0)
	 {
        evensum=evensum+i;
        evencount++;
        break;
    }  
	else
	{
       cout << endl << "Odd numbers";
	}

   }
   evenavg=evensum/evencount;
   
   cout << endl << "Average of All Even Numbers is:  " << evenavg;
}
