#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double userinput,absinput;
	cout << "Enter a number: ";
	cin >> userinput;
	absinput = abs(userinput);
	cout << "|" << userinput << "| = " << absinput;
}
