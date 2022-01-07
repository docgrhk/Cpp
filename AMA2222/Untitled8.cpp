#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double amount = 12618.98;
double interestRate = 0.0013;
double interest = amount * interestRate;
cout << "Interest is " << interest << endl;
cout << "Interest is " << fixed << setprecision(2) << interest << endl;
cout << "Interest is " << showpoint(2) << interest << endl;
return 0;
}
