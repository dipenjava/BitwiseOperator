#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of terms: ";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
        int next=a+b;
        cout<<next<< " ";
        a=b;
        b=next;
    }


}
/*
 output:
 enter number of terms: 10
0 1 1 2 3 5 8 13 21 34 55 89

 */












//
// Created by 91919 on 08-07-2023.
//
