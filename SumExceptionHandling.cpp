#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    sum=a+b+c;
    cout<<"sum :- "<<sum<<endl;
    try
    {
        if(sum>100)
        {
            cout<<"More than 100";
        }
        else
        {
            throw 0;
        }
    }
    catch(int a)
    {
        cout<<"";
    }
    return 0;
}
