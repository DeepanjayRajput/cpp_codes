#include<iostream>
using namespace std;
namespace n1
{
    int no1=100;
    namespace n2
    {
        int no2=200;
    }
}
using namespace n1;
int no1=300;
int main()
{
    int no1=400;
    cout<<"local veriable"<<no1<<" "<<&no1<<endl;
    cout<<"globel variable"<<::no1<<" "<<&::no1<<endl;
    cout<<"namespace var"<<n1::no1<<" "<<&n1::no1<<endl;
    cout<<"nasted namespace var"<<n1::n2::no2<<" " <<&n1::n2::no2<<endl;
    return 0;
}