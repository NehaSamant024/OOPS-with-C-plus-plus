#include<iostream>
using namespace std;
class findarea{
  public:
      int side;
      int length;
      int breadth;
     findarea(int a)
     {
          side=a;
     }
     findarea(int p,int q)
     {
          length=p;
          breadth=q;
     }
     void area(int s)
     {
          int ar=side*side;
          cout<<"area of square: "<<ar<<endl;
     }
     void area(int length,int breadth)
     {
          int ar=length*breadth;
          cout<<"area of rectangle : "<<ar<<endl;
     }
};
int main()
{
   findarea a(5),b(5,7);
   a.area(a.side);
   b.area(b.length,b.breadth);
   return 0;
}
