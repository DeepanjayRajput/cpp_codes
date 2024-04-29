#include<iostream>
using namespace std;
int main(void)
{
    float *ptr=new float(1.2f);
    cout<<"float="<<*ptr<<endl;
    cout<<"Enter the float value="<<endl;
    cin>>*ptr;
    cout<<"float="<<*ptr<<endl;
    delete ptr;
    ptr=NULL;
    cout<<"memo is empty";
    return 0;
}