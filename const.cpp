#include<iostream>
using namespace std;
int main(void)
{
    const float pi=3.14f;
    const float *ptr= &pi;
    cout<<"address and value of pi"<<" "<<&pi<<" "<<pi<<" "<<*ptr<<" "<<ptr<<" "<<&ptr<<endl;
    return 0;
}