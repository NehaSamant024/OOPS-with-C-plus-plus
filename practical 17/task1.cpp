#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void print(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); ++it)
        cout << *it <<" ";
    cout<<endl;
}
int main()
{
    list<int> l;
    int n;
    cout << "Enter the size of the List: "<<endl;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }
    cout<<"The List is:\n";
    print(l);
    cout << "Size of the list is : " << l.size() <<endl;
    
    l.sort();
    cout << "list after sorting: "<<endl;
    print(l);

    l.reverse();
    cout<<"list after Reversing: "<<endl;
    print(l);
    return 0;
}