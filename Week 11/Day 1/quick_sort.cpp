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
        int ar[n+1];
        for(int i=1;i<=n;i++)
        {
            cin >> ar[i];
        }
        int cnt = 1;
        for(int i=1;i<=n;i++)
        {
            if(cnt == ar[i]) cnt++;
        }
        cnt--;
        if(cnt == n) cout << 0 << endl;
        else
        {
            int x = n - cnt;
           cout << ceil(1.0*x/k) << endl;
        }
    }
    return 0;
}