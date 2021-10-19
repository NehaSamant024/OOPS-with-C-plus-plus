#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int main()
{   
  int ch;
    time_t curtime=time(0);
    string dt =ctime(&curtime);
    cout<<"Current time ="<<dt;
    cout<<"\nEnter Your Choice \n"<<"1. Year\n"<<"2.month\n"<<"3. Day\n";
    cin>>ch;
    switch(ch){
       case 1: cout<<dt.substr(20,4);
            break;
       case 2: cout<<dt.substr(4,3);
            break;
       case 3: cout<<dt.substr(0,3);
            break;
       default : cout<<"try again with correct choice\n";
            break;
    }
    return 0;
}
