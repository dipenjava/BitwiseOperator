#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter amount: ";
    cin>>n;
    int n100,n20,n1=0;
    switch(n>=100)
    {
        case 1:
        {
            n100=n/100;
            n=n-n100*100;
            break;
        }

    }
    switch(n>=20)
    {
        case 1:
        {
            n20=n/20;
            n=n-n20*20;
            break;
        }

    }
    switch(n>=1)
    {
        case 1:{
            n1=n/1;
            n=n-n1;
            break;
        }
    }
    cout<<"n100: "<<n100<<endl;
    cout<<"n20: "<<n20<<endl;

    cout<<"n1: "<<n1<<endl;










}


/*
 * program to print number of 100 rupees 20 ruppess and 1 rupees notes in given amount
 */




//
// Created by 91919 on 09-07-2023.
//
