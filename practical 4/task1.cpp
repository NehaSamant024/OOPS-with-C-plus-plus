#include<iostream>
using namespace std;

namespace first{
  void sum(int x, int y){
    cout<<x+y<<endl;}
}
namespace second{
  void sum(float x, float y){
    cout<<x+y<<endl;}
}


int main(){
  first::sum(5,4);
  second::sum(7.9,8.3);
  return 0;
}
