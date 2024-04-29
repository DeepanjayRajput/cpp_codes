#include<iostream>
#define sq(a)  a*a
using namespace std;
inline int square(int a);
int main(void)
{
    int x=5,y=0;
    y=sq(x);
    cout<<y<<endl;
    y=square(x);
    cout<<y<<endl;
    return 0;
}
inline int square(int a)
{
    return a*a;
}