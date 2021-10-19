#include<iostream>
using namespace std;
int main()
{
  int i,j,n;
  cin>>n;
  char a[n][n];
  for(i=n;i>0;i--)
  {
    for(j=0;j<=n;j++)
    {
    if(j>=i)
    {
      a[i][j]='*';
      cout<<a[i][j];
    }
    else
    cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}


