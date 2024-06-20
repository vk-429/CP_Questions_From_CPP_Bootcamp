#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp;
    temp=n;
    int r,num=0;
    if(n>=0)
    {
        while(temp)
        {
            r=temp%10;
            num=num*10+r;
            temp/=10;
        }
        if(num==n)
            cout<<"True";
        else
            cout<<"False";
    }
    else
        cout<<"False";
    return 0;
}