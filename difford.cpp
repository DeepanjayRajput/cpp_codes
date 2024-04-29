#include<iostream>
using namespace std;
float sum(int n1, float n2);
float sum(float n1, int n2);
int main(void)
{
    float ans=0;
    ans=sum(10,20.5);
    cout<<ans<<endl;
    ans=sum(20.5,10);
    cout<<ans;
    return 0;
}
float sum(int n1, float n2)
{
    cout<<"int , float"<<endl;
    return n1+n2;
}
float sum(float n1, int n2)
{
    cout<<"float,int"<<endl;
    return n1+n2;
}