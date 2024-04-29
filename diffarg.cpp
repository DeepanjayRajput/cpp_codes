#include<iostream>
using namespace std;
int sum(int n1, int n2);
float sum(float n1,float n2);
int main(void)
{
    int ans =0;
    ans= sum(10,20);
    cout<<ans<<endl;
    float ans1=0;
    ans1=sum(10.1f,20.22f);
    cout<<ans1<<endl;
    return 0;

}
int sum(int n1, int n2)
{
    return n1+n2;
}
float sum(float n1, float n2)
{
    return n1+n2;
}