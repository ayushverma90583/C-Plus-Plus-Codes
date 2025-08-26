#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    try
    {
        if(age>=18)
        {
            cout<<"These People Are Eligible";
        }
        else
        {
            throw age;
        }
    }
    catch(int age)
    {
        cout<<"These Peoples Are Not Eligible : "<<age;
    }
    return 0;
}