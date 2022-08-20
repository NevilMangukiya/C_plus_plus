#include<iostream>
using namespace std;
int main()
{
    int i, mark[30];
    float sum=0, avg;
	   
       
    cout << endl << "Enter Your Marks in 3 Subjects: ";
   
    for(i=0; i<3; i++)
    {
        cin >> mark[i];
        sum = sum+mark[i];
    }
    avg = sum/3;
   
    cout << endl << "Average Marks = " << avg;
  
  
    return 0;
}
