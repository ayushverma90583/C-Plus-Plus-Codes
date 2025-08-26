#include<iostream>
using namespace std;
int function(int a , int b)
{
    int sum;
    sum=a+b;
    cout<<"sum : "<<sum;
    return sum;
}
int main()
{
    int a,x,b;
    cout<<"write the number : ";
    cin>>a;
    cin>>b;
    x=function(a,b);
    return 0;
}