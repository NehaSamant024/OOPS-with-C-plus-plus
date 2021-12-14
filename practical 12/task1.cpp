#include<iostream>
using namespace std;
class A{
 public:
     int x;
 protected:
     int y;
 private:
      int z;
     };
  class B:public A{
  public:
  void display(){
  x=10;
  y=35;
  // here we cant use z=10; as z is private in parent class
  cout<<x<<endl<<y<<endl;}
  
  };
  int main(){
  
  B obj;
  obj.x=12;
  //here we can not use y and z with object as y is protected and z is private
  obj.display();
}
