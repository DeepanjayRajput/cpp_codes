#include<iostream>
using namespace std;
namespace n1
{
    int no1=500;
    int no2=600;
}
int no1=100;
using namespace n1;
int main()
{
    int no1=200;
    cout<<"local veriable"<<no1<< &no1<<endl;
    cout<<"globel veriable"<<::no1<< &::no1<<endl;
    cout<<"namespace veriable"<<n1::no1<<& n1::no1<<endl;
    return 0;
}