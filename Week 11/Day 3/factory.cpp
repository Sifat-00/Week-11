#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }

    auto ok = [&](ll second)
    {
        ll cnt = 0;
        for(int i=0;i<n;i++)
        {
            cnt+=(second/v[i]);
            if(cnt>=t)
            {
                return true;
            }
        }
        return false;
    };

    ll l=1,r=1e18,mid,ans=0;

    while(l<=r)
    {
        mid = l+(r-l)/2;

        if(ok(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}
