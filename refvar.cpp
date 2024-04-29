#include<iostream>
using namespace std;
int main(void)
{
    const int r=10;
    const int *a=&r;
   // cout<<r<<"\t"<<a<<"\t"<<*a<<"\t"<<&r<<"\t"<<&a;
    int x=10;
    const int &y=x;
    cout<<" x=  "<<x<<"  &x= "<<&a<<endl;
    cout<<"y= "<<y<<" &y= "<<&y<<endl;
    return 0;
}