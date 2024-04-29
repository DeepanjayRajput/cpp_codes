#include<iostream>
using namespace std;
int main(void)
{
    const int a=20;
    const int &r=a;
    cout<<"a= "<<a<<" &a= "<<&a<<endl;
    cout<<"r= "<<r<<" &r= "<<&r<<endl;
    return 0;
}
