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
  class B:protected A{
  public:
  void display(){
  x=10;
  y=35;
  // here we cant use z=10; as z is private in parent class
   //now protected data of class b inherited from class a can be used in child class of b
  cout<<x<<endl<<y<<endl;}
  
  };
  int main(){
  
  B obj;

  //here we can not use x,y and z with object as x and y is protected and z is private
  obj.display();}
