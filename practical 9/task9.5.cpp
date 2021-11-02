#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    int age,marks;
    student(string n,int a,int m)
    {
        name=n;
        age=a;
        marks=m;
    }
};

class collage
{
public:
    int student_no;
    int faculty_no;
    int class_rooms;
    collage(int s,int f,int c)
    {
        student_no=s;
        faculty_no=f;
        class_rooms=c;
    }
};
signed main()
{
    student s1=student("sitaram raju",23,65); collage c1=collage(6754,67,112);
    cout<<"student INFO:\n"<<s1.name<<endl<<"age: "<<s1.age<<" marks: "<<s1.marks<<endl<<endl;
    cout<<"collage INFO:\n"<<"no. of students : "<<c1.student_no<<endl<<"no. of faculty: "<<c1.faculty_no<<endl<<"no. of class rooms: "<<c1.class_rooms;
    return 0;
}
