#include<iostream>

using namespace std;

int main(){
	int a=7;
	int b=a++;
	int c=--b;
	int d=c--;
	cout << a<<b<<c<<d;
	return 0;
} 
