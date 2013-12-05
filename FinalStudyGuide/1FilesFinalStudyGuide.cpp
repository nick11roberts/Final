#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string lines[5];
	int i=0;
	ifstream fin;
	ofstream fout;
	fin.open("myFile.txt");
	fout.open("myFiveLines.txt");
	while(not fin.eof() and i<=4)
	{
		getline(fin, lines[i]);
		i++;
	}
	for(i=0; i<=4; i++)
	{
		fout<<lines[i]<<endl;
	}
	return 0;
}