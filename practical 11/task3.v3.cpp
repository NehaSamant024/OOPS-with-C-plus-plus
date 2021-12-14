//multiple inheritence will also cause a problem when we inherit two class having same method , and we try to acess one of them,this will cause ambiguity

#include<iostream>
using namespace std;
class A{
  public:
  int x=4;
};
class B{
  public:
  int x=5;
};
class C:public A,public B{
  public:
  int z=3;
};

int main(){
  C obj;
 // obj.x=9; //this will throw ambiguity
  obj.A::x=4; //this way we can handle ambiguity and can use method of class A
  cout<<obj.A::x<<endl;
}

