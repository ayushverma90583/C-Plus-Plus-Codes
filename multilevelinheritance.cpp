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
class a : public Animal
{

};
class b : public Animal
{

};
int main()
{
    a aa;
    b bb;
    aa.dog();
    bb.cat();
    return 0;
}