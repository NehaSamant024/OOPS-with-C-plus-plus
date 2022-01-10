#include<iostream>
using namespace std;
class Base 
{
    public: 
    
    int add(int a,int b)
    {
        return(a+b);
    } 
    virtual float add(float a,float b)
    {
        return(a+b);
    }  
    
}; 
class child:public Base{
    public: 
    int add(int a,int b)
    {
        return(a+b+1);
    } 
    float add(float a,float b)
    {
        return(a+b+1);
    }  
}; 
int main()
{ 
    Base *b;
    child c;
    b=&c;
    cout<<b->add(2,3)<<endl;//Compile-Time Binding
    cout<<b->add(1.1f,2.1f)<<endl; //Dynamic Binding
    return 0;
}