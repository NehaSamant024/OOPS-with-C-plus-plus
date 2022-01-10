#include<iostream> 
#include<fstream>
using namespace std;
int main()
{ 
    char ch;
	ifstream fin;
	ofstream fout;
	fout.open("Task1.txt");
	fout<<"Neha Samant\n";
	fout<<"Sec. A\n";
	fout<<"Student ID: 20012459\n";
	fout.close();
	fin.open("Task1.txt");
	while(!fin.eof())
	{ 
	    fin>>noskipws>>ch;
		cout<<ch;
	}
	fin.close();
	return 0;
}