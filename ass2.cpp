#include <iostream>
using namespace std;

int main()
{
    int n1,i,n2;

    cout << "Enter a positive integer: ";
    cin >> n1;
    
    
    cout << "Enter a positive integer: ";
    cin >> n2;

    for (i = n1; i <= 10; i++)
	 {
	 	for(i=1;i<=n2;i++)
	 	{
           cout << n1 << " * " << i << " = " << n1 * i << endl;
	}
	 }
      
//
//    for (i = 1; i <= 10; i++)
//	 {
//	 	cout << "\t\t";
//        cout << n2 << " * " << i << " = " << n2 * i << endl;
//	 }
     
    return 0;
}

