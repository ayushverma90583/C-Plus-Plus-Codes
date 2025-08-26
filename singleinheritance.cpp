#include<iostream>
using namespace std;
class Maths
{
    public :
    void add()
    {
        int a,b,sum;
        cout<<"Write two numbers : ";
        cin>>a>>b;
        sum=a+b;
        cout<<"Sum : "<<sum<<endl;
    }
    void substract()
    {
        int a,b,substract;
        cout<<"Write two numbers : ";
        cin>>a>>b;
        substract=a-b;
        cout<<"Substract : "<<substract;
    }
};
class M : public Maths
{ 
};
int main()
{
    M math;
    math.add();
    math.substract();
    return 0;
}