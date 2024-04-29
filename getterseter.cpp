#include<iostream>
using namespace std;
namespace ncomplex
{
    class complex
    {
        private:
        int real;
        int image;
        public:
        void accept()
        {
            cout<<"this->read=";
            cin>>this->real;
            cout<<"this->image=";
            cin>>this->image;
        }
        void display()
        {
            cout<<"this -> real="<< this->real<<"\t["<<&this->real<<"]"<<endl;
            cout<<"this->image="<< this->image<<"\t["<<&this->image<<"]"<<endl;
        }
    };
}
using namespace ncomplex;
int main(void)
{
    complex cx;
    cout<<"c1="<<endl;
    cx.accept();
    cout<<"cx="<<endl;
    cx.display();
    return 0;
}
