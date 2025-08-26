#include<iostream>
using namespace std;
class Agetester
{
    public :
    void agetest(int age)
    {
        try
        {
            if(age>=18)
            {
                cout<<"These ages of people are eligible : "<<age;
            }
            else
            {
                throw age;
            }
        }
        catch(int age)
        {
            cout<<"these ages of people are not eligible : "<<age;
        }
    }
};
int main()
{
    int age;
    cout<<"Write the age : ";
    cin>>age;
    Agetester a;
    a.agetest(age);
    return 0;
}
