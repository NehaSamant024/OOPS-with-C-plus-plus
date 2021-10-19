#include<iostream>
using namespace std;
int main()
{
  int aNew[3][3];
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      aNew[i][j]=10-a[i][j];
    }
  } 
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<aNew[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
