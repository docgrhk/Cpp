#include<iostream>
using namespace std;

int main(){
	char letter;
	int number;
	cout << "Enter a letter from A to Z (upper case): ";
	cin >> letter;
	cout << "Enter an integer: ";
	cin >> number;
	if(letter>=65 && letter<=90)
		cout << "The letter in next " << number << " is "<< (char)((letter+number-65)%26+65);
	else
		cout << "Your input is not from A to Z."
}
