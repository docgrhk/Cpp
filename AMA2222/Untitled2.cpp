#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
ifstream file;
file.open("student_gpa.txt");
string name;
double gpa;
getline(file,name);
file >> gpa;
cout << name << " has a GPA of " << gpa;
file.close();
return 0;
}
