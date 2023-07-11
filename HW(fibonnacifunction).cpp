#include<iostream>
using namespace std;
void fibonacci(int n)
{
    int a=0;
    int b=1;

    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++)
    {
        int next=a+b;
        a=b;
        b=next;
        cout<<next<<" ";
    }
    cout<<endl;
    cout<<b;


}


int main()
{

    fibonacci(5);




}









//
// Created by 91919 on 10-07-2023.
//
