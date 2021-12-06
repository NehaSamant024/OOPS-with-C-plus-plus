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
    int a;
    void display(){
    a=10;
     x=10;
     y=20;
      cout<<" a=>"<<a<<" x=>"<<x<<" y=>"<<y;
    }
  };
    class C:public B{
    public:
    int b;
    void display(){
    b=67;
    a=10;
     x=10;
     y=20;
      cout<<"b=>"<<b<<" a=>"<<a<<" x=>"<<x<<" y=>"<<y<<endl;
    }
  };
   class D:public C{
    public:
    int c;
    void display(){
     c=45;
     b=67;
    a=10;
     x=10;
     y=20;
      cout<<"c=>"<<c<<" b=>"<<b<<" a=>"<<a<<" x=>"<<x<<" y=>"<<y<<endl;
    }
  };
  int main(){
    D obj;
    obj.display();
    return 0;
  }
