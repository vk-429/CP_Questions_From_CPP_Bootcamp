#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array length : ";
    cin>>n;
    int a[n];
    int i;
    cout<<"Enter array elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    /*int flag=0;
    i=0;
    while(a[i]<a[i+1])
    {
        i++;
    }
    cout<<i;*/
    int ans=0,start=0,end=(n-1),mid;
    mid=(start+end)/2;
    while(start<end)
    {
        if(a[mid-1]<a[mid])
        {
            if(a[mid]>=a[mid+1])
            {
                ans=mid;
                break;
            }
            start=mid;
        }
        else
            end=mid;   
        mid=(start+end)/2;
    }
    cout<<ans;
    return 0;
}