#include<iostream>
using namespace std;
int sum(int a=0,int b=0,int c=0,int d=0)
{
    cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<" "<<"d="<<d<<endl;
    return a+b+c+d;
}
int main(void)
{
    int ans=0;
    ans=sum(10,20,30,40);
    cout<<ans<<endl;
    ans=sum(10,20,30);
    cout<<ans<<endl;
    ans=sum(10,20);
    cout<<ans<<endl;
    ans=sum(10);
    cout<<ans<<endl;
    return 0;
}