#include<iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Please enter three lengths:";
	cin >> a >> b >> c;
	
	if (a+b>c && a+c>b && a+c>a){
		if (a==b || a==c || b==c){
			if(a==b && b==c){
				cout << "They can form an equilateral triangle" << endl;
			}else{
				cout << "They can form an isosceles triangle." << endl;
			}
		}
		else{
			cout << "They can form a triangle"<< endl;
		}
	}else {
		cout << "They cannot form a trianle."<< endl;
	}
	
	return 0;
}
