#include<bits/stdc++.h>
using namespace std;

bool solve(long long ar[],long long x,long long mid,long long n)
{
    long long cat = 0;
    for(int i=mid;i<x;i++)
    {
        if(ar[i]>cat) cat+=n - ar[i];
        else return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,x;
        cin >> n >> x;
        long long ar[x];
        for(int i=0;i<x;i++) cin >> ar[i];
        sort(ar,ar+x);
        long long l = 0,r = x-1,mid,ans;
        long long cnt = 0;
        while(l<=r)
        {
            long long mid = l+(r-l)/2;
            if(solve(ar,x,mid,n))
            {
                ans = x - mid;
                r = mid - 1;
            }
            else l = mid+1;
        }
        cout << ans << endl;
    }
    return 0;
}