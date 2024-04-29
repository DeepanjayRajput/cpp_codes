#include<iostream>
#pragma pack(1)
using namespace std;
struct emp
{
    private:
    int empno;
    char empname[10];
    float sal;
    public:
    void accept_input()
    {
        cout<<"enter the emp num="<<endl;
        cin>>empno;
        cout<<"enter the name"<<endl;
        cin>>empname;
        cout<<"enter the sal"<<endl;
        cin>>sal;
        return;
    }
    void display()
    {
        cout<<"empno="<<empno<<endl;
        cout<<"empname="<<empno<<endl;
        cout<<"salary="<<sal<<endl;
        return;
    }
    inline void setsal(float salary)
    {
        sal=salary;
    }
};
int main(void)
{
    cout<<"enter the employe detales"<<endl;
    emp e1;
    e1.accept_input();
    cout<<"display data"<<endl;
    e1.display();
    cout<<"setsal"<<endl;
    float salary;
    cout<<"Enter the modified sal"<<endl;
    cin>>salary;
    e1.setsal(salary);
    e1.display();

    return 0;
}