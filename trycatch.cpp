#include<iostream>
using namespace std;
int main(void)
{
    int no1, no2, ans;
    try
    {
        
            cout<<"enter the no1"<<endl;
            cin>>no1;
            cout<<"enter the no2"<<endl;
            cin>>no2;
            if(no2==0)
            {
                throw 1;
            }
            ans=no1/no2;
            cout<<"ans="<<ans<<endl;

        
    }
    catch(int)
    {
        cout<<"can not devide by 0 inside int block";
    }
    catch(float)
    {
        cout<<"can not devide by 0 inside float block";
    }catch(double)
    {
        cout<<"can not devide by 0 inside double block";
    }catch(int)
    {
        cout<<"can not devide by 0 inside int block";
    }
    return 0;
}