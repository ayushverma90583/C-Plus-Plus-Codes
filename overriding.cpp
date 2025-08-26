#include<iostream>
using namespace std;
class Animal
{
    public :
    int a;
    void run()
    {
        cout<<"running"<<endl;
    }
    void sleep()
    {
        for(a=1; a<3; a++)
        {
            cout<<"sleep"<<endl;
        }
    }
};
class A : public Animal
{
    public :
    void sleep()
    {
        cout<<"sleeping"<<endl;
    }
};
int main()
{
    A a;
    a.sleep();
    a.run();
    return 0;
}
 