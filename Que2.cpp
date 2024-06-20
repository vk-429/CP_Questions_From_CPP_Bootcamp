#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n],answer[n]={0};
    int i;
    int multi=1,avg,r;
    int count=0,flag=0;
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
        if(nums[i]==0)
            count++;
        else
            multi*=nums[i];
    }
    int sign,ans;
    for(i=0;i<n;i++)
    {
        sign=((multi<0)^(nums[i]<0));
        ans=exp(log(abs(multi))-log(abs(nums[i])))+0.000000001;
        if(count==0)
        {
            if(sign==0)
                answer[i]=ans;
            if(sign==1)
                answer[i]=-ans;
        }
        if(count==1)
        {
            if(nums[i]!=0)
                answer[i]=0;
            else
                answer[i]=multi;
        }    
        if(count>1)
            answer[i]=0;
        cout<<answer[i]<<" ";
    }
    return 0;
}