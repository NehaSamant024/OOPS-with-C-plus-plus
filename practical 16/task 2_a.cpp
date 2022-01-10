include<iostream>
using namespace std;

int main()
{
	int a=10,b=0;
	double z;
	try{ 
		if(b==0)
		throw runtime_error("Arithematic Error: Division By zero!!!\n"); 
		
		z=a/b;
		cout<<z<<endl;
		}  
	catch(runtime_error &e)
	{
		cout<<"Exception is found!!!\n"<<e.what()<<endl;
	} 
	return 0;
} 