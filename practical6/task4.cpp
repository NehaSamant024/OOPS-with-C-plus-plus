#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cout<<"Enter 1st string: ";
	getline(cin,a);
	cout<<"\nEnter 2nd string: ";
	getline(cin,b);

	int c=1;
	int s1=a.size()-1;
	int s2=b.size()-1;
	int l=(s1>s2)?s1:s2;
	
	for(int i=0;i<l;i++)
	{
		if(a[i]!=b[i])
			c=0;
	}
	
	if(c==0)
		cout<<"Strings are not same."<<endl;
	else
		cout<<"Strings are same."<<endl;
return 0;
}
