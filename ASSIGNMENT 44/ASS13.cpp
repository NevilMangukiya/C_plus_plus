#include <iostream>
using namespace std;

int main()
{
	int a[50][50], b[50][50], c[50][50];
	int i, j,r,co,k;
	
	cout << "Enter Rows: ";
	cin >> r;
	
	cout << "Enter column: ";
	cin >> co;
	
	cout << "Enter Value of A : ";

	for( i=0 ; i<r ; i++ )
	{
		for( j=0 ; j<co ; j++ )
		{
			cin >> a[ i ][ j ];
		}
	}

   cout << "Enter Value of B : ";
	for( i=0 ; i<r ; i++ )
	{
		for( j=0 ; j<co ; j++ )
		{
			cin >> b[ j ][ i ];
		}
	}
	
	for( i=0 ; i<r ; i++ )
	{
		for( j=0 ; j<r ; j++ )
		{
			c[ i ][ j ] = 0;
			for( k=0 ; k<co ; k++ )
			{
				c[ i ][ j ] = c[ i ][ j ] + (a[ i ][ k ] * b[ k ][ j ]);
			}
		}
	}

	cout << endl << " Matrix A :" << endl;
	for( i=0 ; i<r ; i++ )
	{
		for( j=0 ; j<co ; j++ )
		{
			cout << "  " << a[ i ][ j ];
		}
		cout << endl;
	}
	
	cout << endl << " Matrix B :" << endl ;
	for( i=0 ; i<co ; i++ )
	{
		for( j=0 ; j<r ; j++ )
		{
			cout << "  " << b[ i ][ j ];
		}
		cout << endl;
	}

	cout << endl << " Product Of 2 matrixs : " << endl;
	for( i=0 ; i<r ; i++ )
	{
		for( j=0 ; j<r ; j++ )
		{
			cout << "  " << c[ i ][ j ];
		}
		cout << endl;
	}
}

