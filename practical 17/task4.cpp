#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout <<endl;
}
int main()
{
    int arr[] = {2, 7, 5, 1, 8, 3, 3, 4};

    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr, arr + n);
    
    cout << "Vector before sorting : \n";
    printvector(vec);

    sort(vec.begin(), vec.end());
    cout << "Vector after sorting : \n";
    printvector(vec);
    
    reverse(vec.begin(), vec.end());
    cout << "Vector after Reversing : \n";
    printvector(vec);

    cout << "Max element is : " << *(max_element(vec.begin(), vec.end())) <<endl;
    cout << " Min Element of vector is : " << *(min_element(vec.begin(), vec.end())) << endl;

    cout << "Occurrence of an 3 in vector :" << count(vec.begin(), vec.end(), 3) << endl;

    sort(arr, arr + n);
    cout << "Array after sorting :\n";
    printArray(arr, n);

    cout << "Using Binary Search for finding 50 in an Array : \n ";
    if (binary_search(arr, arr + n, 50))
    {
        cout << "50 Exist in the Array \n";
    }
    else
    {
        cout << "50 Doesn't Exist in the Array\n";
    }
    return 0;
}