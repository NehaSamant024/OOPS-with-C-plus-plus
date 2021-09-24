#include<iostream>
using namespace std;
void prime(int x) 
 {
 if (x<0 || x>1000)
 
  cout<<"Sorry You Crossed the limits";
    else if(x>1 && x<=1000)
    { 
        int flag=0;
        for(int i=2;i<=x/2;i++)
        {
            if(x%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Entered Number Is A Prime Number";
        else
            cout<<"Entered Number Is Not A Pirme Number";
    }
    else
        cout<<"Entered Number Is Not Prime";
}
int main()
{
    int n;
    cin>>n;
    prime(n);
    return 0;
}
