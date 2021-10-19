      #include<iostream>
using namespace std;
int main()
{
  int i,j,n;
  cin>>n;
  char a[n][n];
  for(i=n;i>=1;--i)
  {
    for(j=1;j<=i;++j)
    {
      a[i][j]='*';
      cout<<a[i][j];
    }
    cout<<endl;
  }
  return 0;
}


