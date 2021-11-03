#include<iostream>
using namespace std;
class rem
{
    private:
        int a;
        int b;
    public:
        rem(int a,int b)
        {
            cout<<a%b;
        }
};
int main()
{
    int a=10,b=4;
    rem r(a,b);
    return 0;
}

    

