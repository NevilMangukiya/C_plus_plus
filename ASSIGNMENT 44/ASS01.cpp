#include<iostream>
using namespace std;
int main()
{
    int a[50], b[50], c[100];
	int n, i, k;
	
    cout <<"Enter the Size for First Array: ";
    cin >> n;
    
    cout << endl << "Enter "<< n <<" Elements for First Array: ";
    
	for(i=0; i<n; i++)
    {
        cin>>a[i];
        c[i] = a[i];
    }
    k = i;
    
    cout << endl << "Enter "<< n <<" Elements for Second Array: ";
   
    for(i=0; i<n; i++)
    {
        cin>>b[i];
        c[k] = b[i];
        k++;
    }
   
    cout<<"\nThe New Array (Merged Array):\n";
    
	for(i=0; i<k; i++)
    {
	   cout << c[i] << " ";
    }
    
    cout << endl;
    return 0;
}
