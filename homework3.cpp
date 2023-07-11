#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int num=0;
    int gum=0;
    while(n!=0)
    {
        int g = n%2;
        if(g==1)
        {
            num++;
        }
        n/=2;

    }
    cout<<num<<endl;
    while(m!=0)
    {
        int g = m%2;
        if(g==1)
        {
            gum++;
        }
        m/=2;

    }
    cout<<gum<<endl;
    cout<<"Answer is: "<<num+gum;




}




//
// Created by 91919 on 10-07-2023.
//
