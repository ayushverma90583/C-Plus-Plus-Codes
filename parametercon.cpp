#include<iostream>
#include<string.h>
using namespace std;
class Function
{
    public :
    int id;
    char name[20];
    char mobile[20];
    char address[20];
    Function(int id1 , char name1[20] , char mobile1[20] , char add1[20])
    {
        id=id1;
        strcpy(name,name1);
        strcpy(mobile,mobile1);
        strcpy(address,add1);
    }
    void print()
    {
        cout<<id<<endl<<name<<endl<<address<<endl<<mobile;
    }
};
int main()
{
    Function f(54,"AyushVerma","9058305812","saharanpur");
    f.print();
    return 0;
}