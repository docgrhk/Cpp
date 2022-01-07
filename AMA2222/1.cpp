#include<iostream>
#include<fstream>
#include<string> 

using namespace std;

int main()
{
	string name;
	double gpa;
	ifstream file;
	file.open("student.txt");

	getline(file,name);
	file >> gpa;
	
	cout << name << " has a GPA of " << gpa;
	file.close();
	
	return 0;
}
