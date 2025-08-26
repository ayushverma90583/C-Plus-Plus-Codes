#include<iostream>
using namespace std;
class Shape
{
    public :
    void rectangle(int l , int b)
    {
        cout<<"Area of Rectangle : ";
        cout<<l*b<<endl;
    }
    void square(int side)
    {
        cout<<"Area of rectangle : ";
        cout<<side*side<<endl;
    }
};
class Functions
{
    public :
    void function(Shape s)
    {
        s.rectangle(20,5);
        s.square(8);
    }
};
int main()
{
    Shape s1;
    Functions fun;
    fun.function(s1);
    return 0;
}