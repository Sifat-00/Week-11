#include<bits/stdc++.h>
using namespace std;

bool check(vector<pair<long long,long long>>ar,long long helth,long long k)
{
    long long cnt = 0;
    for(auto x : ar)
    {
        long long val =  ceil(1.0*k/x.second);
        cnt+=val*x.first;
        if(cnt>=helth) return true;
    }
    return cnt>=helth;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long health,n;
        cin >> health >> n;
        long long ar[n],coll[n];
        long long sum = 0;
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        for(int i=0;i<n;i++) cin >> coll[i];
        vector<pair<long long,long long>> v;
        for(int i=0;i<n;i++) v.push_back({ar[i],coll[i]});


        long long l = 0,r=4e10,mid,ans = 0;

        while(l<=r)
        {
            mid = l+(r-l) / 2;
            if(check(v,health,mid))
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
