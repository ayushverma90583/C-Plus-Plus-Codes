#include<iostream>
using namespace std;
class polycons
{
    public :
    polycons()
    {
        int a;
        a=20+34;
        cout<<"Sum : "<<a;
    }
    polycons(int x , int y)
    {
        int a;
        a=x+y;
        cout<<"Sum : "<<a;
    }
};
int main()
{
    polycons(2,2);
    return 0;
}