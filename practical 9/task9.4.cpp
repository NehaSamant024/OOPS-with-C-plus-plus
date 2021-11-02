#include<iostream>
#include<string>
using namespace std;
class student
{
    string name;
    int age,marks;
public:    
    friend void add(student a1, student a2, student a3);
    friend void dispaly(student a1);
    student(string n,int a,int m)
    {
        name=n;
        age=a;
        marks=m;
    }
};
void add(student a1, student a2, student a3) 
{
    int marks=a1.marks+a2.marks+a3.marks;
    cout<<"total marks of all studnts are : "<<marks<<endl;
}
void dispaly(student a1)
{
    cout<<a1.name<<endl<<"age : "<<a1.age<<endl<<"marks : "<<a1.marks<<endl<<endl;
}
signed main()
{
    student s1=student("sitaram raju",23,65),s2=student("jagmohan divakar",19,95),s3=student("ratandas tripathi",46,93);
    dispaly(s1); dispaly(s2); dispaly(s3);
    add(s1,s2,s3);
    return 0;
}



