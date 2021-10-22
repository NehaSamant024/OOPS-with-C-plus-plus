#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    cout<<"a:"<<a<<" ";
    *p=20;
    cout<<"p:"<<*p<<" ";
    **q=30;
    cout<<"q:"<<**q<<" ";
    *p=**q;
    cout<<"p:"<<*p<<endl;
}


