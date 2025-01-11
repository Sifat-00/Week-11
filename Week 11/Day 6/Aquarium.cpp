#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,x;
        cin >> n >> x;
        long long ar[n];
        for(int i=0;i<n;i++) cin >> ar[i];


        long long l = 1, r= 1e12,mid,ans = 0;
        sort(ar,ar+n);
        while(l<=r)
        {
            mid = l+(r-l)/2;
            long long sum = 0;
            for(int i=0;i<n;i++)
            {
                if(ar[i]<mid)
                    sum+=abs(mid - ar[i]);
                    else break;
            }
            if(sum<=x)
            {
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        cout << ans << endl;
    }
    return 0;
}