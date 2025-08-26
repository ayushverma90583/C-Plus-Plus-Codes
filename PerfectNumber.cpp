#include<iostream>
using namespace std;
class Perfect
{
    public :
    int a,sum=0;
    void perfect(int num)
    {
        for(a=1; a<num; a++)
        {
            if(num%a==0)
            {
                sum=sum+a;
            }
        }
        if(sum==num)
        {
            cout<<"perfect";
        }
        else
        {
            cout<<"not perfect";
        }
    }
};
int main()
{
    Perfect p;
    p.perfect(28);
    return 0;
}
