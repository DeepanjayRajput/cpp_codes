#include<iostream>
using namespace std;
void change(int *val);
int main(void)
{
    int a=11;
    cout<<"inside main "<<a<<endl;
    change(&a);
    cout<<"after call "<<a<<endl;
    return 0;
}
void change(int *val)
{
    cout<<"inside change "<<*val<<endl;
    *val+=100;
    cout<<"after increment"<<*val<<endl;
}