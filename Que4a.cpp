#include<bits/stdc++.h>
using namespace std;
float median(int nums1[],int nums2[],int m,int n)
{
    if(m>n)
        return median(nums2,nums1,n,m);
    
    int low=0,high=m,midpos=((m+n+1)/2);
    while(low<=high)
    {
        int cut1=(low+high)/2;
        int cut2=midpos-cut1;
        int l1=(cut1==0)?INT_MIN:nums1[cut1-1];
        int l2=(cut2==0)?INT_MIN:nums2[cut2-1];
        int r1=(cut1==m)?INT_MAX:nums1[cut1];
        int r2=(cut2==n)?INT_MAX:nums2[cut2];

        if((l1<=r2)&&(l2<=r1))
        {
            if((m+n)%2==1)
                return max(l1,l2);
            else
                return (max(l1,l2)+min(r1,r2))/2.0;
        }
        else if(l1>r2)
            high=cut1-1;
        else
            low=cut1+1;
    }
    return 0.0;
}
int main()
{
    int m,n;
    cout<<"Enter the sizes of arrays(values of m&n) : ";
    cin>>m>>n;
    int nums1[m],nums2[n];
    int i;
    cout<<"Enter the elements of the first array : ";
    for(i=0;i<m;i++)
        cin>>nums1[i];
    cout<<"Enter the elements of the second array : ";
    for(i=0;i<n;i++)
        cin>>nums2[i];
    cout<<"The Median of two arrays is "<<fixed<<median(nums1,nums2,m,n);
    return 0;
}
