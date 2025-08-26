#include<iostream>
using namespace std;
int function(int a , int b)
{
    int sum;
    sum=a+b;
    cout<<"sum : "<<sum;
}
int main()
{
    int a,b;
    cout<<"write the numbers : ";
    cin>>a;
    cin>>b;
    function(a,b);
    return 0;
}