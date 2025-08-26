#include<iostream>
#include<string.h>
using namespace std;
class Function
{
    public :
    char name[20];
    char address[20];
    void setname(char name1[])
    {
        strcpy(name,name1);
    }
    char* getname()
    {
        return name;
    }
    void setaddress(char address1[])
    {
        strcpy(address,address1);
    }
    char* getaddress()
    {
        return address;
    }

};
int main()
{
    char n1[20];
    char a1[20];
    Function f;
    cout<<"Enter Name : ";
    cin>>n1;
    cout<<"Enter Address : ";
    cin>>a1;
    f.setname(n1);
    cout<<"Name : "<<f.getname()<<endl;
    f.setaddress(a1);
    cout<<"Address : "<<f.getaddress();
    return 0;
}