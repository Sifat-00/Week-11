#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;

        cin >> n   >> k;
        long long l = 1,r = 2e9,mid,ans;
        while(l<=r)
        {
            mid = l + ( r - l) /2;
            if(mid - (mid/n)>=k)
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        cout << ans << endl;
    }
    return 0;
}