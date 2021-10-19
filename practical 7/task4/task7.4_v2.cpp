#include<iostream>
using namespace std;
int main()
{
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  for(int i=1;i<=3;i++)
  {
    for(int j=1;j<=3;j++)
    {
      a[i-1][j-1]=a[i-1][2]/3;
    }
  }
  for(int i=1;i<=3;i++)
  {
    for(int j=1;j<=3;j++)
    {
      cout<<a[i-1][j-1];
    }
    cout<<endl;
  }
  return 0;
}
