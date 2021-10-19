#include<iostream>
using namespace std;
int main()
{
  int i,j,n;
  cin>>n;
  char a[n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
      a[i][j]='*';
      cout<<a[i][j];
    }
    cout<<endl;
  }
  return 0;
}
