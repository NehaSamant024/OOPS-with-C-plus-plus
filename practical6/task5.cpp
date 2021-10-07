#include<iostream>
#include<string>
using namespace std;
int main()
{
 string a="";
 getline(cin,a);
 string b="";
 getline(cin,b);
 if(a.compare(b)==0)
 {
  cout<<"equal"<<endl;
 }
 else if(a.compare(b)>0)
 {
  cout<<"a is greater than b"<<endl;
 }
 else
 {
  cout<<"a is lesser than b"<<endl;
 }
 return 0;
}
