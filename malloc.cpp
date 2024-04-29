#include<iostream>
using namespace std;
namespace ncomplex
{
    class complex
    {
        private:
        int real;
        int imag;
        public:
        void accept()
        {
            cout<<"real no="<<endl;
            cin>>this->real;
            cout<<"imag no="<<endl;
            cin>>this->imag;
        }
        void display()
        {
            cout<<"real= "<<this->real<<" &real= "<<&this->real<<endl;
             cout<<"real= "<<this->imag<<" &imag= "<<&this->imag<<endl;
        }
        complex()
        {
            this->real=10;
            this->imag=20;
            cout<<"inside perameter less constructore"<<endl;
        }
        complex(int value)
        {
            this->real=value;
            this->imag=value;
            cout<<"inside perameterise constructor"<<endl;
        }
        complex(int real, int imag)
            {
                this->real=real;
                this->imag=imag;
                cout<<"inside paramaterized ctor  with 2 arg of complex class"<<endl;
            }
            ~complex()
            {
                this->display();
                this->real=0;
                this->imag=0;
                cout<<"inside default constructor"<<endl;
            }

    };
    
}
using namespace ncomplex;
int main(void)
{
    complex *ptr1=(complex*)malloc(sizeof(complex)*1);
    cout<<"ptr1->display()="<<endl;
    ptr1->display();
    free (ptr1);
    ptr1=NULL;


    complex *ptr2=new complex;
    cout<<"ptr2->display()="<<endl;
    ptr2->display();
    delete ptr2;
    ptr2 =NULL;

    
    complex *ptr3=new complex(112,220);
    cout<<"ptr3->display()="<<endl;
    ptr3->display();
    delete ptr3;
    ptr3=NULL;
    return 0;
}