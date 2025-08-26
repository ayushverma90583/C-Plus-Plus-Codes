#include<iostream>
#include<string.h>
using namespace std;
class Function
{
    public :
    virtual void user()
    {
        char name[20];
        strcpy(name,"AyushVerma");
        cout<<name;
    }
};
class Function1 : public Function
{
    void user()
    {
        char name[20];
        char address[20];
        strcpy(name,"AyushVerma");
        strcpy(address,"Saharanpur");
        cout<<name<<endl<<address;
    }
};
int main()
{
    Function *f;
    Function1 f1;
    f=&f1;
    f->user();
    return 0;
}
