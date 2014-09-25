// Backus-Naur Form
// Austin Andrews
// Visual Studio 2013
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string INPUT = "bnf.in";
const string OUTPUT = "bnf.out";

const string HALT = "HALT";

bool isXNumber(string X)
{
	if (X == "0") return true;
	else if (X == "1") return true;
	else if (X == "2") return true;
	else if (X == "3") return true;
	else if (X == "4") return true;
	else if (X == "5") return true;
	else if (X == "6") return true;
	else if (X == "7") return true;
	else if (X == "8") return true;
	else if (X == "9") return true;
	else return false;
}
bool isXOp(string X)
{
	if (X == "+") return true;
	else if (X == "-") return true;
	else return false;
}
bool isXVariable(string X)
{
	if (X == "x") return true;
	else if (X == "y") return true;
	else if (X == "z") return true;
	else return false;
}
string whatIsX(string X)
{
	if (isXNumber(X))
		return "num";
	else if (isXOp(X))
		return "op";
	else if (isXVariable(X))
		return "var";

}

void main()
{
	ifstream fin(INPUT);
	if (fin)
	{
		ofstream fout(OUTPUT);

		string readX;
		fin >> readX;
		string X = whatIsX(readX);


		fout.close();
		fin.close();
	}
	else
	{
		cout << "Input file not found." << endl;
	}
}