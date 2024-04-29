#include<iostream>
using namespace std;
int main(void)
{
    char *ptr=new char ('A');
    cout<<"*ptr="<<*ptr<<endl;
    cout<<"enter *ptr=";
    cin>>*ptr;
    cout<<"*ptr="<<*ptr<<endl;
    delete ptr;
    ptr=NULL;
    cout<<"memory is freed"<<endl;
    return 0;
}