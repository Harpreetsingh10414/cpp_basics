#include<iostream>
using namespace std;

int main()
{
    int divisor,dividend,quotient=0,remainder=0;
    cout<<"Enter Dividend - ";
    cin>>dividend;
    cout<<"\nEnter Divisor - ";
    cin>>divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout<<"\nQuotient = "<<quotient;
    cout<<"\nRemainder = "<<remainder;
    return 0;
}