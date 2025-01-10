#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        long long sum = (2 * k + n - 1) * n / 2;
        long long l=1,r = n,mid,ans = LLONG_MAX;

        while(l<=r)
        {
            mid = l +(r-l)/2;


            long long cnt = mid * (2 * k + mid - 1) / 2;

           long long diff = abs(cnt - (sum - cnt));
            ans = min(ans, diff);
            if(cnt>sum/2)
            {
                r = mid - 1;
            }
            else l = mid+1;
        }
        cout << ans << endl;
    }
    return 0;
}
