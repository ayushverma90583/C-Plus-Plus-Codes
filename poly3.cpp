#include<iostream>
using namespace std;
class prime
{
    public :
    void function(int start , int end)
    {
        int a,b,num;
        for(b=start; b<end; b++)
        {
            for(a=2; a<b; a++)
            {
                if(b%a==0)
                {
                    break;
                }
            }
            if(b==a)
            {
                cout<<a<<" ";
            }
        }
    }
};
int main()
{
    prime p;
    p.function(20,90);
    return 0;
}