#include<iostream>
using namespace std;
namespace first
{
 int add(int a,int b)
 {
 return a+b;
 }
}
 namespace second
 {
 float add(float a,float b)
   {
   return a+b;
   }
}
int main()
{
int x;
cout<<"Program Output\n";
x=first::add(1,2);
cout<<endl<<"the addtion of a+b = "<<x;
x=first::add(1.2,2);
cout<<endl<<"the addtion of a+b = "<<x;
x=first::add(1,2.1);
cout<<endl<<"the addtion of a+b = "<<x;
x=first::add(1.1,2.1);
cout<<endl<<"the addtion of a+b = "<<x;
x=first::add(0,0);
cout<<endl<<"the addtion of a+b = "<<x;

float y;
y=second::add(1,2);
cout<<endl<<"the addtion of a+b = "<<y;
y=second::add(1.2,2);
cout<<endl<<"the addtion of a+b = "<<y;
y=second::add(1,2.1);
cout<<endl<<"the addtion of a+b = "<<y;
y=second::add(1.1,2.1);
cout<<endl<<"the addtion of a+b = "<<y;
y=second::add(0,0);
cout<<endl<<"the addtion of a+b = "<<y;
return 0;
}

