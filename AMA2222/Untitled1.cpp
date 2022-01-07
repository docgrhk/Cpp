#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int BanishLetters(string in,string out,string lett)
{
	ifstream inf;
	inf,open(in,iostream::in);
	ofstream outf;
	outf.open(out,ios::out);
	
	lett = lett[0,lett.size()];
	string low,up;
	for (int i=0;i<lett.size();i++){
		low[i] = tolower(lett[i]);
	}
	for (int i=0;i<lett.size();i++){
		up[i] = tolower(lett[i]);
	}
	
	char ch,u,l;
	while(inf.get(ch)){
		for (int n = 0; n < lett.size();n++){
			u = up[n], l = low[n];
			if(cha ==u or ch ==l){
				break;
			}
		}
	}
	
	outf.put(ch);
}

int main()
{
	string infile, outfile, letters;
	cout << "Input file:";
	cin >> infile;
	cout << "Onput file:";
	cin >> outfile;
	cout << "Letters to banish:";
	cin >> letters;
	BanishLetters(infile,outfile,letters);
	return 0;
}
