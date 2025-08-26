#include<iostream>
using namespace std;
class Function
{
    public :
    void add(int a , int b)
    {
        cout<<"Sum : "<<a+b<<endl;
    }
    void substract(int a , int b)
    {
        cout<<"Substract : "<<a-b<<endl;
    }
    void multiply(int a , int b)
    {
        cout<<"Multiply : "<<a*b<<endl;
    }
    void divide(int a , int b)
    {
        cout<<"Divide : "<<a/b<<endl;
    }
};
int main()
{
    Function f;
    f.add(5,5);
    f.substract(20,10);
    f.multiply(2,5);
    f.divide(100,10);
    return 0;
}
