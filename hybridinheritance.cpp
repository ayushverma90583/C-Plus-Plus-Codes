#include<iostream>
using namespace std;
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
class Both : public Maths , public Animal
{

};
class a : public Both
{

};
class b : public Both
{

};
int main()
{
    a aa;
    b bb;
    aa.dog();
    bb.cat();
    aa.add();
    bb.substract();
    return 0;
}
