#include<iostream>
#include<string>
using namespace std;
class student{
  public:
      int rollno;
      int phoneno;
      string address;
};
int main()
{
student sam,john;
sam.rollno=12;
sam.phoneno=739479324;
sam.address="dehradun";

cout<<"sam.rollno: "<<sam.rollno<<endl;
cout<<"sam.phoneno: "<<sam.phoneno<<endl;
cout<<"sam.address: "<<sam.address<<endl;
cout<<endl;

john.rollno=13;
john.phoneno=815479324;
john.address="lucknow";

cout<<"john.rollno: "<<john.rollno<<endl;
cout<<"john.phoneno: "<<john.phoneno<<endl;
cout<<"john.address: "<<john.address<<endl;

return 0;
}
