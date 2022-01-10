#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base Cons." << endl;
    }
    ~Base()
    {
        cout << "Base des." << endl;
    }
};
class child : public Base
{
public:
    child()
    {
        cout << "Child Cons." << endl;
    }
    ~child()
    {
        cout << "Child Des." << endl;
    }
};
int main()
{
    Base *b;
    child c;
    b=&c;
    b->~child(); 
    b->~Base();
    return 0;
}