#include<iostream>
using namespace std;
class Base 
{
    public: 
    //abstraction is implemented
    virtual int add(int a,int b)
    {
        return(a+b);
    } 
    float add(float a,float b)
    {
        return(a+b);
    }  
    //abstraction is implemented
    virtual int multi(int a,int b)=0;
}; 
class child:public Base{
    public: 
    int add(int a,int b)
    {
        return(a+b+1);
    } 
    int multi(int a,int b)
    {
        return (a*b);
    }
}; 
int main()
{ 
    Base *b;
    child c;
    b=&c;
    cout<<b->add(2,3)<<endl;
    cout<<b->multi(5,4)<<endl; 
    return 0;
}