#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number";
    cin>>n;

    bool yes = true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            yes = false;
            break;
        }
    }
    if(yes == false)
    {
        cout<<n<<"  is not a prime number.";
    }
    else{
        cout<<n<<" is a prime number.";
    }

}














//
// Created by 91919 on 08-07-2023.
//
