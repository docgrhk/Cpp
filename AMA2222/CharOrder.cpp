#include<iostream>

using namespace std;
int main()
{
	char a,b,c;
	char m,n,p;
	cout << "Enter the first letter: " ;
	cin >> a;
	cout << "Enter the second letter: ";
	cin >> b;
	cout << "Enter the third letter: " ;
	cin >> c;
	
	m= min(min(a,b),c);
	p= max(max(a,b),c);
	
	if (!(a==m||a==p)){
		n=a;
	}
	else if (!(b==m||b==p)){
		n=b;
	} else{
		n=c;
	}
	
	cout << m << n << p;
	
	return 0;
}
