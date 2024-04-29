#include<iostream>
#pragma pack (1)
using namespace std;
struct emp
{
    int empno;
    char name[10];
    float sal;
};
void accept(struct emp *e);
void display(struct emp *e);
int main(void)
{
    struct emp e1;
    cout<<("enter the info")<<endl;
    accept(&e1);
    cout<<"display"<<endl;
    display(&e1);
    e1.sal=1000;
    display(&e1);
    return 0;
}
void accept(struct emp *e)
{
    cout<<"enter the empno"<<endl;
    cin >> e->empno;
    cout<<"enter th ename";
    cin>> e->name;
    cout<<"enter the sal";
    cin>> e->sal;
    return;

}
void display(struct emp *e)
{
    cout<<"empno, name, sal"<<endl;
    cout<<e->empno<<e->name<<e->sal;
    cout<<(*e).empno<<(*e).name<<(*e).sal;
}