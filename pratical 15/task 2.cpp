#include<iostream> 
#include<fstream>
using namespace std;
int main()
{ 
    char ch;
	fstream fin,fout;
	//Writing into a File
	fout.open("Task2.txt",ios::out);
	fout<<"My name Is  Neha Samant\n";
	fout<<"I Am from Sec. A\n";
	fout<<"Student ID: 20012459\n";
	fout.close();
	
	// Reading from a file
	fin.open("Task2.txt",ios::in); 
	cout<<"Contents of File Before Apending:\n";
	while(!fin.eof())
	{ 
	    fin>>noskipws>>ch;
		cout<<ch;
	}
	fin.close(); 
	
	//Appending into a file 
	fout.open("Task2.txt",ios::app); 
	fout<<"My Class Roll no.: 36\n";
	fout<<"Course: B.tech Cse\n";
	fout.close();
	fin.open("Task2.txt",ios::in);
	cout<<"\nContents of file after appending:"<<endl;
	while(!fin.eof())
	{ 
	    fin>>noskipws>>ch;
		cout<<ch;
	}
	fin.close();
	return 0;
}