#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    int n,target;
    cin>>n>>target;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    unordered_map<int,int> mp;
    unordered_map<int,int>::iterator it;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=target)
            it=mp.find(target-a[i]);
        if(it!=mp.end())
        {
            ans.push_back(mp[target-a[i]]);
            ans.push_back(i);
            break;
        }
        mp.emplace(a[i],i);
    }
    cout<<ans[0]<<" "<<ans[1]<<"\n";
    return 0;
}