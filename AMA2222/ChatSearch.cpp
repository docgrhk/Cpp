// string search
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s,w;
	cout << "Enter a sentence: ";
//	cin >> s;
	getline(cin,s);
//	sentence use getline()
	s = " "+s+" ";
	
	cout << "Enter a word:";
	cin >> w;
//	getline(cin,w);
	w = " "+w+" ";
	
	int count =0;
	for (int i=0; i<=s.length();i++){
		if (s.substr(i,w.length())==w){
			count ++;
		}
	}
	
	cout << "This word appears " << count << " times in the sentence.";
	
	return 0;
}
