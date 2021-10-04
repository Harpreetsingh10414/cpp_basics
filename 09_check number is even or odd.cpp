#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter any number to check it is odd or even - ";
    cin>>a;
    if(a%2==0)
    {
        cout<<"\nIt is a Even number";
    }
    else if(a%2!=0)
    {
        cout<<"\nOdd number";
    }
    else
    {
    cout<<"\nInvalid input not a number !";
    }
    return 0;
}