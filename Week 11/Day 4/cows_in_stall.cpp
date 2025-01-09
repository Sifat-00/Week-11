#include<bits/stdc++.h>
using namespace std;


bool check(int min,int ar[],int n,int k)
{
    int low = ar[0];
    int cnt = 1;
    for(int i=0;i<n;i++)
    {
        if(ar[i] - low >= min)
        {
           cnt++;
           low = ar[i];
        }
        if(cnt == k) return true;
    }
    return false;
}

int main()
{
    int n,k;
    cin >> n >> k;
    int ar[n];
    for(int i=0;i<n;i++) cin >> ar[i];
    sort(ar,ar+n);

    int l = 1,r = ar[n-1] - ar[0],ans = 0;

    while(l<=r)
    {
        int mid = l + (r-l)/2 ;
        if(check(mid,ar,n,k))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;

    }
    cout << ans << endl;
    return 0;
}