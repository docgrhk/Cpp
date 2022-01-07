#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double x = 1234.5678;
//	cout << scientific << x << endl;
	cout << fixed << setprecision(3) << x << endl;
	cout << setw(2) << x << endl;
//	cout << setw(10) << x;
}
