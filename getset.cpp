#include<iostream>
using namespace std;
namespace complexx
{
    class complex{
        private:
        int real;
        int imag;
        public:
        void accept()
        {
            cout<<"real:";
            cin>>this->real;
            cout<<"imag:";
            cin>>this->imag;
        }
        void display()
        {
            cout<<"real"<<this->real<<"\t["<<&this->real<<"]"<<endl;
            cout<<"imag"<<this->imag<<"\t["<<&this->real<<"]"<<endl;
        }
        int get_real()
        {
            return this->real;
        }
        int get_imag()
        {
            return this->imag;
        }
        void set_real(int Real)
        {
            this->real=Real;
        }
        void set_imag(int Imag)
        {
            this->imag=Imag;
        }

    };
}
using namespace complexx;
int main(void)
{
    complex c1;
    cout<<"enter the values";
    c1.accept();
    cout<<"display data";
    c1.display();
    cout<<"get real";
    c1.get_real();
    cout<<"get imag";
    c1.get_imag();
    cout<<"set real";
    c1.set_real(584);
    cout<<"set imag";
    c1.set_imag(321);
    c1.display();
    return 0;
}