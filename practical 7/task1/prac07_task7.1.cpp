#include<iostream>
using namespace std;
int main()
{
 int c;
 cout<<"Enter 1 for year\n Enter 2 for month\n Enter 3 for day\n ";
 cout<<"Enter your choice\n";
 cin>>c;
 switch(c)
 {
   case 1:
   cout<<" Current Year: 2021"<<endl;
   break;
   case 2:
   cout<<" Current Month: october"<<endl;
   break;
   case 3:
   cout<<"Current Day: 14"<<endl;
   break;
   default:
   cout<<"Not Applicable"<<endl;
   break;
 }
 return 0;
}

