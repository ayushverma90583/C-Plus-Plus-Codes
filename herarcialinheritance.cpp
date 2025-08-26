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
class Animal1 : public Animal
{

};
class Animal2 : public Animal1
{

};
int main()
{
    Animal2 Ani;
    Ani.dog();
    Ani.cat();
    return 0;
}