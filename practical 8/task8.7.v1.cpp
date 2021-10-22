#include <iostream>  
    using namespace std;
    void swap(int , int);
    int main()  
    {  
        int a = 10;  
        int b = 20;   
        cout<<"Before swapping a = "<< a <<endl<<"b = "<<b<<endl;
        swap(a,b);  
        cout<<"After call by value swapping(in main) a = "<< a <<endl<<"b = "<<b<<endl;
    }  
    void swap (int a, int b)  
    {  
        int temp;   
        temp = a;  
        a=b;  
        b=temp;
        cout<<"After call by value swapping(in function) a = "<< a <<endl<<"b = "<<b<<endl;
    }  

   
