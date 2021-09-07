#include <iostream>
using namespace std;

int main()
{
	float subtotal,gratuity,rate,total;
	cout << "Enter the subtotal and a gratuity rate: ";
	cin >> subtotal >> rate;
	
	gratuity = subtotal * rate / 100;
	total = subtotal + gratuity;
	
	cout << "The gratuity is $" << gratuity << " and total is $" << total;
}
