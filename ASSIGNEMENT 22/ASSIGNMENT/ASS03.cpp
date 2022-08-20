#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

cout << "________________________________________________________________________________" << endl;
   
    cout << endl << "Quotient = " << quotient << endl;
    cout << endl << "Remainder = " << remainder;

    return 0;
}
