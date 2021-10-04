#include<iostream>
using namespace std;

int main()
{
    int a,b,temp=0;
    cout<<"Enter 1st number - ";
    cin>>a;
    cout<<"\nEnter 2nd number - ";
    cin>>b;
    cout<<"\nBefore swaping 1st number is "<<a<<" and 2nd number is "<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nAfter swaping 1st number is now "<<a;
    cout<<" and 2nd number is now "<<b;
    return 0;
}