#include<iostream>
using namespace std;
class abc{
  public:
       void func()
       {    static int count=0;
            count++;
            cout<<"function called: "<<count<<"time"<<endl;
       }
};
int main()
{
     abc a,b,c;
     a.func();
     b.func();
     c.func();
     a.func();
     b.func();
     return 0;
}


