#include <iostream>
using namespace std;  
void swap(int *, int *); 
int main()  
{  
   int a = 10;  
   int b = 20;   
   cout<<"Before swapping values in main a = "<<a<<" b = "<<b<<endl;
   swap(&a,&b);  
   cout<<"After swapping values in main a = "<<a<<" b = "<<b<<endl;
}  
void swap (int *a, int *b)  
{  
   int temp;   
   temp = *a;  
   *a=*b;  
   *b=temp;  
   cout<<"After swapping values in function a = "<<*a<<" b = "<<*b<<endl;
}

