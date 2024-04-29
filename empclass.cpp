#include<iostream>
#include<stdio.h>
#pragma pack(1)
#include<string.h>
using namespace std;
class emp
{
    private:
    int empno;
    char empname[10];
    float sal;
    public:
    void accept()
    {
        cout<<"enter the emp no"<<endl;
        cin>>empno;
        cout<<"entr the emp name"<<endl;
        cin>>empname;
        cout<<"enter the emp dalary"<<endl;
        cin>>sal;
    }
    inline void setsal(float salary)
    {
        sal=salary;
    }
    void setname(char *name)
    {
        strcpy( empname,name);
    }
    void display()
    {
        cout<<"empno"<<" "<<empno<<" "<<"enpname"<<" "<<empname<<" "<< " "<<"salary"<<" "<<sal<<endl;
    }
};
int main()
{
    emp e1;
    cout<<"enter the emp data"<<endl;
    e1.accept();
    cout<<"display data"<<endl;
    e1.display();
    cout<<"set salary"<<endl;
    cout<<"enter the updated salary"<<endl;
    float salary=0;
    cin>>salary;
    e1.setsal(salary);
    cout<<"update name"<<endl;
    char name[10];
    cin>>name;
    e1.setname(name);
    cout<<"display updated data"<<endl;
    e1.display();
    return 0;
}
