#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int c=0;
    int t;
    t=x;
    while(t!=0)
    {
        t/=10;
        c++;
    }
    int a[c];
    int i,r,flag=0;
    int t1;
    t1=x;
    for(i=0;t1!=0;i++)
    {
        r=t1%10;
        t1/=10;
        a[i]=r;
    }
    if(x>=0)
    {
        for(i=0;i<c/2;i++)
        {
            if(a[i]==a[(c-1)-i])
                continue;
            else
                break;
        }
        if(i==c/2)
            cout<<true;
        else
            cout<<false;
    }
    else
    {
        cout<<false;
    }
    return 0;
}