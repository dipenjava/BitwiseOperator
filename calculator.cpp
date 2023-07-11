#include<iostream>
using  namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter Number 1: ";
    cin>>a;
    cout<<"Enter Number 2: ";
    cin>>b;
    char ch;
    cout<<"Enter operator: ";
    cin>>ch;
    switch(ch)
    {
        case '+':
        {
            cout<<" a + b: "<<a+b<<endl;
            break;
        }
        case '-':
        {
            cout<<" a - b: "<<a-b<<endl;
            break;
        }
        case '*':
        {
            cout<<" a * b: "<<a*b<<endl;
            break;
        }
        case '/':
        {
            cout<<" a / b: "<<a/b<<endl;
            break;
        }
        default:
        {
            cout<<"please enter operator";
        }
    }


}








//
// Created by 91919 on 09-07-2023.
//
