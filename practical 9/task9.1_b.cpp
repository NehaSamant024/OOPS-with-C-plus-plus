#include<iostream>
#include<string>
using namespace std;
class student{
  public:
      string name;
      int age;
      int year;
      char section;
      int marks;
};
int main()
{
int tm=0,n;
cout<<"enter no of students: ";
cin>>n;
student obj[n];
for(int i=0;i<n;i++){
  cout<<"enter marks of student "<<i<<" : ";
  cin>>obj[i].marks;}
for(int i=0;i<n;i++){
  tm=tm+obj[i].marks;}
cout<<"total marks: "<<tm<<endl;

return 0;
}
