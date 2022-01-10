#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 'a';
	} 
	catch(int x)
	{
		cout<<"Caught"<<endl;
	} 
	
	return 0;
} 
/* There's no type conversion when exceptions are caught.
   Hence, error occurs.*/