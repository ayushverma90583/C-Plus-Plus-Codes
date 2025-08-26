#include<iostream>
using namespace std;
class Function
{
    public :
    void add()
    {
        int add,a,b;
        a=10;
        b=20;
        add=a+b;
        cout<<"Add : "<<add;
    }
    void add(int a , int b)
    {
        int add;
        add=a+b;
        cout<<"Add : "<<add;
    }
};
int main()
{
    Function f;
    f.add();
    return 0;
}