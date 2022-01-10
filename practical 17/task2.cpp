#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
void print(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout <<endl;
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of the vector: "<<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >>x;
        v.push_back(x);
    }
    cout<<"The vector is: \n";
    print(v);

    cout<< "Size of the vector is : " << v.size()<<endl; 
    cout<< "Capacity of vector is : " << v.capacity() <<endl;

    v.resize(2 * n, 0);
    cout<<"vector after resizing and intialising after 0\n";
    print(v);

    cout << "Checking vector is empty or not after :\n";
    if (v.empty())
        cout << "Vector is empty";
    else
        cout << "Vector is not empty";
    return 0;
}