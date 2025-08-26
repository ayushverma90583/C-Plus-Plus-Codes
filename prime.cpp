#include<iostream>
using namespace std;
int cheqprime(int num)
{
    int a;
    for(a=2; a<num; a++)
    {
        if(num%a==0)
        {
            break;
        }
    }
    if(num==a)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
};
int main()
{
    int num;
    cout<<"write the number : ";
    cin>>num;
    cheqprime(num);
    return 0;
}