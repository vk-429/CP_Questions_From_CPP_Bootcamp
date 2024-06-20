#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool comparebyvalue(pair<int,int>& a, pair<int,int>&b)
{
    return a.first<b.first;
}

vector<int> solve()
{
    int n,target;
    cin>>n>>target;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(make_pair(x,i));
    }
    sort(a.begin(),a.end(),comparebyvalue);
    
    int i=0;
    int i1=0,i2=0;
    int lastindex=n-1;
    for(i=0;i<n;i++)
    {
        int j=lastindex;
        while((a[i].first+a[j].first)>target)
        {
            j--;
            lastindex=j;
        }
        if(a[i].first+a[j].first==target)
        {
            i1=a[i].second;
            i2=a[j].second;
            break;
        }
    }
    return {i1,i2};
}

int main()
{
    vector<int> ans=solve();
    cout<<ans[0]<<" "<<ans[1]<<"\n";
    return 0;
}