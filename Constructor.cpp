#include<iostream>
#include<string.h>
using namespace std;
class Function
{
    public :
    int id;
    char name[20];
    Function()
    {
        cout<<"ID : ";
        cin>>id;
        strcpy(name,"AyushVerma");
    }
    void print()
    {
        cout<<id<<endl<<name;
    }
};
int main()
{
    Function f;
    f.print();
    return 0;
}
