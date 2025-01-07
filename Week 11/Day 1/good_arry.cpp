#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        map<int,int> mp;
        int n;
        cin >> n;
        int ar[n];
        long long sum = 0;

        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
            sum+=ar[i];
        }
        if(n==1)
        {
             cout<< "NO" << endl;
             continue;
        }
        if(sum>=mp[1]+n) cout << "YES" << endl;
        else cout << "No" << endl;
    }
    return 0;
}