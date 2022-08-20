#include<iostream>
using namespace std;

int main()
{
	int a[3][3];
	int i,j,min,max=0;
	
	cout << "Enter Refugees Weight: " << endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin >> a[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
            if(min > a[i][j])
            {
            	min=a[i][j];
			}
	    }
    }
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{			
		   if(max < a[i][j])
			{
				max=a[i][j];
			}
		}
	}

	
     cout << endl << "Lowest Weight of refugees is: " << min << endl;
     cout << endl << "Highest Weight of refugees is: " << max << endl;
     
     return 0;

}
          
     
