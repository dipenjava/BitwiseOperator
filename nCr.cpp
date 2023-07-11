#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1 ;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int num= factorial(n);
    int dem=factorial(r)*factorial(n-r);
    int ans= num/dem;
    return ans;

}



int main()
{
    cout<<"Enter n: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter r: "<<endl;
    int r;
    cin>>r;
    int hu = ncr(n,r);
    cout<<"combination is: "<< hu <<endl;



}

/*
 output:
 Enter n:
12
Enter r:
0
combination is: 1


 */








//
// Created by 91919 on 09-07-2023.
//
