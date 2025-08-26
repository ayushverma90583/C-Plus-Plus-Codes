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
class Animal
{
    public :
    void dog()
    {
        cout<<"Dog is a loyal pet animal"<<endl;
        cout<<"Dog is sleeping"<<endl;
    }
    void cat()
    {
        cout<<"cat's bones are very flexible";
    }
};
class Both : public Maths , public Animal
{

};
int main()
{
    Both b;
    b.dog();
    b.add();
    return 0;
}
