#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        vector<int> x(a,a+n);
        sort(b,b+n);
        sort(a,a+n);
        map<int,queue<int>> mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]].push(b[i]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(mp[x[i]].front());
            mp[x[i]].pop();
        }
        for(auto x : ans) cout << x <<" ";
        cout << endl;
    }
    return 0;
}
