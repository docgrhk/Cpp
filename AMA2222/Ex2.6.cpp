#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter three integers: ";
	cin >> a >> b >> c;
	if (a*a+b*b==c*c){
		cout << "This is a Pythagorean triple.";
	}
	else{
		cout << "This is not a Pythagorean triple.";
	}
}
