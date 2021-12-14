#include<iostream>
using namespace std;
class mammals{
 public:
      void display(){
      cout<<"i am mammal"<<endl;}
     };
  class marineanimal{
  public:
  void display1(){
  cout<<"i am marine animal"<<endl;}
  
  };
  class bluewhale:public mammals,public marineanimal{
   public:
     void display2(){
     cout<<"i belong to both: mammals as well as marine animal"<<endl;}
  };
  int main(){
  
  mammals obj;
  obj.display();
  marineanimal obj1;
  obj1.display1();
  bluewhale obj2;
  obj2.display2();
  obj2.display();
  obj2.display1();
  }
