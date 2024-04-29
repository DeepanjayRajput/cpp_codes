#include<iostream>
using namespace std;
int main(void)
{
    int *ptr,index,no;
    cout<<"enter how many elements us want=";
    cin>>no;
    ptr = new int[no];
    cout<<"enter elements of array"<<endl;
    for(index=0;index<no;index++)
    {
        cout<<"enter ptr["<<index<<"]=";
        cin>>ptr[index];
    }
    cout<<"elements of array="<<endl;
    
    return 0;
}