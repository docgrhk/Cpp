#include<iostream>
using namespace std;

int main()
{
	double salary, MPF;
	cout << "Please enter your monthly salary ($): ";
	cin >> salary;
	
	if(salary<7100){
		cout << "You are not required to contribute." << endl;
	}
	if(salary>=7100 && salary < 30000){
		MPF = salary * 0.05;
		cout << "You need to contribute $" << MPF << "." << endl;
	}
	if(salary>=30000){
		cout << "You have reached the maximum contribution of $1500.";
	}
	return 0;
}
