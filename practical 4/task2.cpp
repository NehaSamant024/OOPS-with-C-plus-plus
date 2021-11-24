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

using namespace second;

int main(){
  sum(5,6);
  sum(5.3,3.4);
  sum(4.3,4);
  sum(6,6.7);
  return 0;}
