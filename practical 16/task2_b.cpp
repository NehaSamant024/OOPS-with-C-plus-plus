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
		cout<<"Caught: "<<x;
	} 
	catch(...)
	{
		cout<<"Default Exception!!\n";
	} 
	return 0;
}
/* There's no implicit conversion when exceptions are caught,
   hence 'a' is not converted to int. Therefore, catch(..)
   which is used to catch all type of exception, gets executed.*/