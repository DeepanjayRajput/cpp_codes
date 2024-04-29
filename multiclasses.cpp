#include<iostream>
using namespace std;
namespace ncomplex
{
    class complex{
        
        private:
        int real;
        int imag;
    
    public:
    void accept()
    {
        cout<<"this->real=";
        cin>>this->real;
        cout<<"this->imag";
        cin>>this->imag;
    }
    void display()
    {
        cout<<"real="<<this->real<<"\t["<<&this->real<<"]"<<endl;
        cout<<"imag="<<this->imag<<"\t["<<&this->imag<<"]"<<endl;
    }
    complex()
    {
        this->real=10;
        this->imag=20;
        cout<<"inside paramaterless ctor of complex class"<<endl;
    }
    complex(int value)
    {
        this->real=value;
        this->imag=value;
        cout<<"inside paramaterize ctor with 2 arg of complex class"<<endl;

    }
    complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
        cout<<"inside paramaterized ctor with 2 arg of complex class"<<endl;
    }
    ~complex()
    {
        cout<<"-------------------------------"<<endl;
        this->display();
        this->real=0;
        this->imag=0;
        cout<<"inside dtor of complex class"<<endl;
    cout<<"-----------------------------------"<<endl;
    }


};
} // namespace ncomplex
using namespace ncomplex;
int main(void)
{
    complex c1;
    cout<<"c1=";
    c1.display();
    complex c2(111);
    cout<<"c2=";
    c2.display();
    complex c3(555,888);
    cout<<"c3=";
    c3.display();
    return 0;
}
