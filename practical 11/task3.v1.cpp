//diamond problem
#include<iostream>
class A{
  public:
  int x=4;
};
class B:public A{
  public:
  int y=5;
};
class C:public A{
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
}
//this code will give error because here x is ambiguous as x is present in the  parent class of b and c and both b and c are inherited by d ,
//so memory will get allocated to class A two times, and compiler will not able to make a decision about accessing class A methods.
