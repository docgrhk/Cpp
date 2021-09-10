#include<iostream>
using namespace std;

int main(){
	double weight,height,BMI;
	cout << "Please input yout weight in kilograms: ";
	cin >>weight;
	cout << "enter you height in meters: ";
	cin >>height;
	BMI = weight / (height *height);
	cout << "BMI is "<< BMI<<endl;
	if (BMI<18.5)
	cout << "Underweight"<<endl;
	
	else if (BMI<25)
	cout << "Noraml"<<endl;
	
	else 
	cout << "Obese"<<endl;
	
	return 0;
	
}
