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
  sum(5,6);
  return 0;}
