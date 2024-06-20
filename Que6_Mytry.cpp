#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    int start = 0, ans = 0;
    
    for (int end = 0; end < n; end++)
    {
        if (mp.find(s[end]) != mp.end())
            start = max(start, mp[s[end]] + 1);
        mp[s[end]] = end;
        ans = max(ans, end - start + 1);
    }
    
    cout << ans << "\n";
    return 0;
}
