#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.14;
	float radius, length, area, volume;
	cout << "Enter the radius and length of a cylinder: ";
	cin >> radius >> length;
	
	area = radius * radius * PI;
	volume = area * length;
	cout << "The base area is " << area << endl;
	cout << "The colume is " << volume;
	
}
