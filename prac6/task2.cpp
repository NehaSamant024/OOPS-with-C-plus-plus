#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s,a;
	cout<<"Enter string:";
	getline(cin,s);
	
	for(int i=s.size()-1;i>=0;i--)
		a.push_back(s[i]);
		
	if(a==s)
		cout<<"is palindrome";
	else
		cout<<"not palindrome";
return 0;
}
