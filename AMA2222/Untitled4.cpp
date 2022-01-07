#include <iostream>
using namespace std;
int main()
{
int n;
bool flag = true;
cout << "Enter the value of n: ";
cin >> n;
for (int i = 2; i < n; i++)
if (n % i == 0)
flag = false;
if (flag)
cout << n << " is a prime number." << endl;
else cout << n << " is not a prime number." << endl;
return 0;
}
