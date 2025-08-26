#include<iostream>
#include<string.h>
using namespace std;
class Function
{
    public :
    int id;
    char name[20];
    char mobile[20];
    Function()
    {
        cout<<"ID : ";
        cin>>id;
        strcpy(name,"AyushVerma");
        strcpy(mobile,"9411835360");
    }
    void print()
    {
        cout<<id<<endl<<name<<endl<<mobile;
    }
};
int main()
{
    Function f;
    f.print();
    return 0;
}