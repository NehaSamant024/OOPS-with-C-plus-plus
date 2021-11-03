#include<iostream>
using namespace std;
class student
{
    private:
        int roll_no;
        char name[50];
        char sec;
    public:
        void getdet()
        {
            cin>>name>>roll_no>>sec;
        }
        void showdet()
        {
            cout<<"name-"<<name<<endl;
            cout<<"section-"<<sec<<endl;
            cout<<"roll number-"<<roll_no<<endl;
        }

};

int main()
{
    int n;
    cout<<"enter number of student";
    cin>>n;
    student s1[n],*s;
    s=s1;
    for(int i=0;i<n;i++)
    {
        cout<<"enter name , roll nmber , section of student: "<<i+1<<endl;
        (s+i)->getdet();
    }
    for(int i=0;i<n;i++)
    {
        cout<<"data of student: "<<i+1<<endl;
        (s+i)->showdet();
    }
    return 0;
}


