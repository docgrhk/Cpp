#include <iostream>
using namespace std;

int main()
{
	double principal, rate, time, interest, total;
	cout << "Enter the principal ($): ";
	cin >> principal;
	cout << "enter the annual intersest rate (%): ";
	cin >> rate;
	cout << "Enter the time fo deposit (months): ";
	cin >> time;
	
	interest = principal * (rate /100) * (time/12);
	total = principal + interest;
	
	cout << "The interest is $" << interest << endl;
	cout << "The total amount is $" << total;
	
	return 0;
}

