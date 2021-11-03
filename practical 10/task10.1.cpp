#include<iostream>
using namespace std;
class student{
    private:
        string name;
        string address;
        long int telephone_no;
        long int mobileno;
        string head;
    public:
        void getdata()
        {   cout<<"name: ";
            cin>>name;
            cout<<"address: ";
            cin>>address;
            cout<<"telephone no : ";
            cin>>telephone_no;
            cout<<"mobile no :";
            cin>>mobileno;
            cout<<"head of the family :";
            cin>>head; }
        void showdata(){
            cout<<"name: "<<name<<endl;
            cout<<"address: "<<address<<endl;
            cout<<"telephone no : "<<telephone_no<<endl;
            cout<<"mobile no :"<<mobileno<<endl;
            cout<<"head of the family :"<<head<<endl;}
};
int main()
{
    int n;
    cout<<"enter number of student: ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter data for family "<<i+1<<":"<<endl;
        s[i].getdata();
    }
    for(int i=0;i<n;i++)
    {   cout<<endl;
        cout<<"directory: "<<endl;
        cout<<"data of student: "<<i+1<<endl;
        s[i].showdata();
    }
    return 0;
}
