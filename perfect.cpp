#include<iostream>
using namespace std;
int cheqperfect(int b)
{
    int a,sum=0;
    for(a=1; a<b; a++)
    {
        if(b%a==0)
        {
            sum=sum+a;
        }
    }
    if(b==sum)
    {
        cout<<"perfect";
    }
    else
    {
        cout<<"not perfect";
    }
};
int main()
{
    int a;
    cout<<"write the number : ";
    cin>>a;
    cheqperfect(a);
    return 0;
}