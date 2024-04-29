#include<iostream>

using namespace std;
class demo
{
    private:
   int &ref1;
    char &ref2;
    float &ref3;
   double &ref4;
    public :
};
int main(void)
{
    cout<<"size of "<<sizeof(demo)<<endl;
    return 0;
}