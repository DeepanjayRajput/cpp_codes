#include<iostream>
using namespace std;
void swap(int n1, int n2)
{
    int temp;
    cout<<"before swap "<<"n1= "<<n1<<" n2= "<<n2<<endl;
    temp=n1;
    n1=n2;
    n2=temp;
    cout<<"after swap "<<"n1= "<<n1<<" n2= "<<n2<<endl;
    return;
}
int main(void)
{
    swap(10,20);
    return 0;
}