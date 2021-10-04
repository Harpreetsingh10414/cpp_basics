#include<iostream>
using namespace std;

int main()
{
    float h,b,area=0;
    cout<<"Area of triangle";
    cout<<"\nHeight of the triangle -> ";
    cin>>h;
    cout<<"\nBase of the triangle -> ";
    cin>>b;
    area=0.5*h*b;
    cout<<"\n It's area is = "<<area;
    return 0;
}