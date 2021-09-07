#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI =3.14159;
	double radius;
	cout << "Enter the radius:";
	cin >> radius;
	double area = radius*radius*PI;
	cout << area << endl;
	return 0;
}
