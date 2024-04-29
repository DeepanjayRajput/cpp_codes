#include<iostream>
using namespace std;
struct stu
{
    char stuname[20];
    int rollno;
    float marks;
    int age;
};
stu acceptdata()
{
    stu s1;
    cout<<"enter the student name"<<endl;
    cin>>s1.stuname;
    cout<<"enter rollno"<<endl;
    cin>>s1.rollno;
    cout<<"enter the marks"<<endl;
    cin>>s1.marks;
    cout<<"enter the age"<<endl;
    cin>>s1.age;
    
}
void displaydata(stu arr[])
{
    stu s1;
    cout<<"student name: "<<s1.stuname<<endl<<"age: "<<s1.age<<endl<<"marks: "<<s1.marks<<endl<<"rollno: "<<s1.rollno<<endl;
}
int main(void)
{
    int no;
    cin>>no;
    stu arr[no];
    cout<<"enter the no of data you want to upload"<<endl;
    for(int i=0;i<=no;i++)
    {
       arr[i]=acceptdata();
    }
    
    displaydata(arr);
   
    return 0;
}