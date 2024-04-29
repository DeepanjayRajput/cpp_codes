#include<iostream>
using namespace std;
namespace ncomplex
{
    class complex
    {
        private:
        int real;
        int imag;
        public :
        void accept()
        {
            cout<<"real"<<endl;
            cin>>this->real;
            cout<<"imag"<<endl;
            cin>>this->imag;
        }
        void display()
        {
            cout<<"this->real="<< this->real<<" \t["<<&this->real<<"]"<<endl;
            cout<<"this->imag="<< this->imag<<" \t["<<&this->imag<<"]"<<endl;
        }
        complex(int real=10,int imag=20)
        {
            this->real=real;
            this->imag=imag;
            cout<<"inside the paramaterized constructor";
        }
    };
}
using namespace ncomplex;
int main(void)
{
    complex c1;
    cout<<"c1";
    c1.display();
    cout<<"c1"<<endl;
    complex c2(789);
    cout<<"c2"<<endl;
    c2.display();
    complex c3(456,123);
    cout<<"c3"<<endl;
    c3.display();
    return 0;
}