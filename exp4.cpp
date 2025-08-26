#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number : ";
    cin>>x;
    try
    {
        if(x==0)
        {
            throw 0;
        }
        else
        {
            cout<<120/x<<endl;
        }
    }  
    catch(int num)
    {
        cout<<"error occured";
    }
    cout<<"This is the last Line...";
    return 0;
}