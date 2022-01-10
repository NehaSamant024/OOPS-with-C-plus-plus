/*Version 1: Wthout Using "using keyword" 
  Version 2: The function not visible to child class
    are both add function of Base Class
 */

#include<iostream>
using namespace std;
class Base 
{
    public: 
    int add(int a,int b)
    {
        return(a+b);
    } 
    float add(float a,float b)
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
}; 
int main()
{
    child c;
    cout<<c.add(2,3)<<endl;
    cout<<c.add(2.1,3.1)<<endl; 
    return 0;
}
