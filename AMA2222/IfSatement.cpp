#include<iostream>

using namespace std;

int main(){
	int x;
	cout << "Please input an integer: ";
	cin >> x;
	
	if (x%2==0)
	cout << "HiEven!";
	
	else if (x%5==0)
	cout << "HiFive";
	
	else 
	main();
	
	return 0;
} 
