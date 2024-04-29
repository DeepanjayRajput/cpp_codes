#include<iostream>
using namespace std;
void swap(int *n1, int *n2)
{
    int temp;
    cout<<"befor swap"<<" n1= "<<*n1<<" n2= "<<*n2<<endl;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    cout<<"after swap"<<" n1= "<<*n1<<" n2= "<<*n2<<endl;
    
}
int main(void)
{
    int no1=1000,no2=3000;
    swap(&no1,&no2);
    return 0;
}