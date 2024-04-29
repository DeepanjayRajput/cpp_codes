#include<iostream>
using namespace std;
int sum(int n1, int n2);
int sum(int n1, int n2, int n3);
int main(void)
{
    int ans=0;
    ans=sum(10,20,30);
    cout<<ans<<endl;
    ans=sum(10,20);
    cout<<ans<<endl;
    return 0;
}
int sum(int n1, int n2)
{
    return n1+n2;
}
int sum(int n1,int n2, int n3)
{
    return n1+n2+n3;
}