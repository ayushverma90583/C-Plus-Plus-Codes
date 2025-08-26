#include<iostream>
using namespace std;
int main()
{
    float h,e,m,g,s,sum,total=500,per;
    cout<<"write the marks of all subjects : ";
    cout<<endl<<"hindi : ";
    cin>>h;
    cout<<"english : ";
    cin>>e;
    cout<<"maths : ";
    cin>>m;
    cout<<"g.k : ";
    cin>>g;
    cout<<"science : ";
    cin>>s;
    sum=h+e+m+g+s;
    cout<<"sum : "<<sum;
    per=sum/total*100;
    cout<<endl<<"percentage : "<<per;
    return 0;
}