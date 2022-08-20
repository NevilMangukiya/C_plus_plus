#include <iostream>
using namespace std;

int main()
{
	int a[50][50];
	int i, j, dia=0,r,c;
	
	cout << "Enter Rows: ";
	cin >> r;
	
	cout << "Enter Column: ";
	cin >> c;

	cout << "Enter Value of A : ";

	for( i=0 ; i<r ; i++ )
	{
		for( j=0 ; j<c ; j++ )
		{
			cin >> a[ i ][ j ];
		}
	}

	for( i=0 ; i<r ; i++ )
	{
		for( j=0 ; j<c ; j++ )
		{
			if(i == j)
			{
				dia = dia + a[ i ][ j ];
		    }
        }
    }
    
    cout << endl << "Matrix A: " << endl;
    
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		cout << "  " << a[i][j];
        }
        cout << endl;
    }
    
    cout << endl << "Sum of All Diagonal Elements is:  " << dia;
    
    
    return 0;
}

