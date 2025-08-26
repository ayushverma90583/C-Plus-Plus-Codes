#include<iostream>
using namespace std;
class Function
{
    public :
    void credit()
    {
        cout<<"Deposited to the bank"<<endl;
    }
    void debit()
    {
        cout<<"Withdrawl from the bank";
    }
};
class bank
{
    public :
    void bankk(Function fun)
    {
        fun.credit();
        fun.debit();
    }
};
int main()
{
    Function f;
    bank b;
    b.bankk(f);
    return 0;
}