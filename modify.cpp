#include<iostream>
using namespace std;
namespace complexx
{
    class complex
    {
        private:
        int real;
        int imag;
        public:
        void accept()
        {
            cout<<"real ";
            cin>>this->real;
            cout<<"imag ";
            cin>>this->imag;
        }
        void display()
        {
            cout<<"real="<<this->real<<"\t["<<&this->real<<"]"<<endl;
            cout<<"ima="<<this->imag<<"\t["<<&this->imag<<"]"<<endl;
        }
        int get_real()
        {
            return this->real;
        }
        int get_imag()
        {
            return this->imag;
        }

    };
}
using namespace complexx;
int main(void)
{
    complex c1;
    cout<<"c1=";
    c1.accept();
    cout<<"c1";
    c1.display();
    int r,i;
    r=c1.get_real();
    i=c1.get_imag();
    cout<<r<<endl;
    cout<<i<<endl;

    return 0;
}