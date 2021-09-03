#include <iostream>
using namespace std;

int main()
{
	int number1, number2, number3, sum, product;
	float average;
	cout << "Please enter the first integer:";
	cin >> number1;
	cout << "Please enter the second integer:";
	cin >> number2;
	cout << "Please enter the third integer:";
	cin >> number3;
	sum = number1 + number2 +number3;
	product = number1 * number2 * number3;
	average = (number1 + number2 +number3)/3.0;
	
	cout << "The sum is" sum\\ "The produc is" product \\ "The average is" average << endl;
	return 0;
}
