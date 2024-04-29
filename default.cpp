#include<iostream>
using namespace std;
void sum(int n1=0, int n2=0, int n3=0, int n4=0)
{
    cout<<" n1= "<<n1<<" n2= "<<n2<<" n3= "<<n3<<" n4= "<<n4;
}
int main (void)
{
    sum(10,20,60,9);
    sum(50,20);
    return 0;
}
