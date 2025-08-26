#include<iostream>
#include<string.h>
using namespace std;
class Admin
{
    public :
    char username[20];
    int password;
    void setusername(char name[])
    {
        strcpy(username,name);  
    }
    char* getusername()
    {
        return username;
    }
    void setpassword(int password1)
    {
        password=password1;
    }
    int getpassword()
    {
        return password;
    }
};
int main()
{
    Admin a;
    char u[20];
    int p;
    cout<<"Username : ";
    cin>>u;
    cout<<"Password : ";
    cin>>p;
    a.setusername(u);
    cout<<"Username : "<<a.getusername()<<endl;
    a.setpassword(p);
    cout<<"Password : "<<a.getpassword();
    return 0;
}