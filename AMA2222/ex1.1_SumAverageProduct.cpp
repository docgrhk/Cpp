#include <iostream>
using namespace std;

int main()
{
	int number1;
	int number2;
	int number3;
	int sum;
	float avg;
	float  product;
	
	cout << "Please enter the first integer: ";
	cin >> number1;
	
	cout << "Please enter the second integer: ";
	cin >> number2;
	
	cout << "Please enter the third integer: ";
	cin >> number3;
	
	sum = number1+number2+number3;
	cout << "The sum is " << sum << endl;
	
	avg = sum / 3.0;
	cout << "The average is " << avg << endl;
	
	product = number1*number2*number3;
	cout << "The product is " << product << endl;
	
	return 0;
}
