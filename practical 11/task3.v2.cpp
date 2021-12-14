//diamond problem solution using virtual in base class 
#include<iostream>
using namespace std;
class A{
  public:
  int x=4;
};
class B:virtual public A{
  public:
  int y=5;
};
class C:virtual public A{
  public:
  int z=3;
};
class D:public B,public C{
  public:
  int k=9;
};
int main(){
  D obj;
  obj.x=9;
  cout<<obj.x<<endl;
}

