#include <iostream>
using namespace std;

int main()
{
	int amount, notes1000, notes500, notes100;
	cout << "enter the withdrawal amount($): ";
	cin >> amount;
	amount /=100;
	
	notes1000 = amount / 10;
	notes500 = amount % 10 / 5;
	notes100 = amount % 10 % 5;
	
	cout << "Here is yout money " << endl;
	cout << "$1000 x " << notes1000 << endl;
	cout << "$500 x " << notes500 << endl;
	cout << "$100 x " << notes100 << endl; 
}
