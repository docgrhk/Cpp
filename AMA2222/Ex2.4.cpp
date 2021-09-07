#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cout << "Please enter a number: ";
	cin >> x;
	cout << "Please enter another number: ";
	cin >> y;
	if (x<3){
		x +=10;
	};
	if (x>0&&y>0){
		cout << x *y;
	} 
	else{
		cout << -1;
	};
	
	if (x>y){
		cout << x-y;
	}
	else{
		cout << y-x;
	};
	
}
