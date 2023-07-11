#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER: ";
    cin>>n;

    int num=0;;
    while(n!=0)
    {
        int digit=n%10;
        num=(10*num)+digit;
        n/=10;


    }
    cout<<num;



}









/*
 * reverse number output
 * 123---->321
 *
 */
//
// Created by 91919 on 09-07-2023.
//
