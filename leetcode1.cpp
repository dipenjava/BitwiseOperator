#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int product=1;
    int sum=0;
    while(n!=0)
    {
        int a=n%10;
        product*=a;
        sum+=a;
        n/=10;
    }
    int answer= product-sum;
    cout<<answer;




}












//
// Created by 91919 on 08-07-2023.
//
