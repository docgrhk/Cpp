#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
string name;
double gpa;
ifstream file;
file.open("student.txt");
file >> gpa;
getline(file,name);

cout << name << " has a GPA of " << gpa;
file.close();
return 0;
}
