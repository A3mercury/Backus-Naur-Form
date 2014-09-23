// Backus-Naur Form
// Austin Andrews
// Visual Studio 2013
#include <iostream>
#include <fstream>
using namespace std;

const string INPUT = "bnf.in";
const string OUTPUT = "bnf.out";

void main()
{
	ifstream fin(INPUT);
	if (fin)
	{
		ofstream fout(OUTPUT);
		
		

		fout.close();
		fin.close();
	}
	else
	{
		cout << "Input file not found." << endl;
	}
}