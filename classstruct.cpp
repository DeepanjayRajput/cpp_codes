#include<iostream>
#pragma pack(1)
using namespace std;
class Emp
{
    int empcode;
    char empname;
    float sal;
};
struct emp
{

};
int main(void)
{
    Emp e1;
    emp e2;
    cout<<"class"<<" " <<sizeof(e1)<<" "<<&e1<<endl;
    cout<<"struct"<<" "<<sizeof(e2)<<" "<<&e2<<endl;
    return 0;
}