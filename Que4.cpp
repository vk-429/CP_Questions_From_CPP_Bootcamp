#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the sizes of arrays(values of m&n) : ";
    cin>>m>>n;
    int a[m],b[n];
    int i;
    cout<<"Enter the elements of the first array : ";
    for(i=0;i<m;i++)
        cin>>a[i];
    cout<<"Enter the elements of the second array : ";
    for(i=0;i<n;i++)
        cin>>b[i];
    int c[m+n];
    i=0;
    int j=0;
    int k=0;
    while(k<(m+n))
    {
        while((b[j]<=a[i])&&(j<n))
        {
            c[k]=b[j];
            j++;
            k++;
        }
        while((a[i]<=b[j])&&(i<m))
        {
            c[k]=a[i];
            i++;k++;
        }
        if(i==m)
        {
            while(j<n)
            {
                c[k]=b[j];
                j++;
                k++;
            }
        }
        if(j==n)
        {
            while(i<m)
            {
                c[k]=a[i];
                i++;
                k++;
            }
        }
    }
    float ans;
    if((m+n)%2==0)
        ans=(c[(m+n)/2]+c[((m+n)/2)-1])/2.0;
    else
        ans=c[(m+n)/2];
    cout<<"Median is "<<ans<<"\n";
    return 0;

}