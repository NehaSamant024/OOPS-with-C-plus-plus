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
  class B:private A{
  public:
  void display(){
  x=10;
  y=35;
  // here we cant use z=10; as z is private in parent class
  cout<<x<<endl<<y<<endl;}
  
  };
  int main(){
  
  B obj;
  //obj.x=12; now x is private in child class can not be used with private
  //here we can not use y and z with object as y and z is private in chlid class B
  obj.display();
}
