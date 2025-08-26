#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    try
    {
        if(num==0)
        {
            throw 00000;
        }
        else
        {
            throw num;
        }
    }
    catch(int num)
    {
        cout<<"caught a number : "<<num;
    }
    return 0;
}