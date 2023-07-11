#include<iostream>
using namespace std;
bool isprime(int n)
{
    bool prime=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=false;
        }
    }
    if(!prime)
    {
        return false;
    }
    return true;
}


int main()
{
    cout<<"Enter number to be tested: ";
    int n;
    cin>>n;
    if(isprime(n))
    {
        cout<<"is a prime number.";

    }
    else
    {
        cout<<"Not a prime number";
    }

}













//
// Created by 91919 on 10-07-2023.
//
