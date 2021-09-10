#include<iostream>
using namespace std;

int main()
{
	double a,b,c;
	cout << "Enter three angels in degree: ";
	cin >> a >> b >> c;
	
	if (a>0 && b>0 && c>0 && a+b+c==180){
		if (a==b&& b==c)
		cout << "Equilateral triangle.";
		if (a==b||b==c||a==c)
		cout << "Isoceles triangle.";
	} 
	else {
		cout << "Not a triangel.";
	}
}
