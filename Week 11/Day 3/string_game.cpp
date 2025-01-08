#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    string t, p;
    cin >> n >> m;
    cin >> t >> p;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        a[i]--;
    }

    auto ok = [&](int del) 
    {
        vector<bool> bad(n, false);
        for (int i = 0; i <=del; i++) 
        {
            bad[a[i]] = true;
        }

        int j = 0;
        for (int i = 0; i < n; i++) 
        {
            if (!bad[i] && t[i] == p[j]) {
                j++;
            }
            if (j == m) 
            {
                return true;
            }
        }
        return false;
    };

    int l = 0, r = n - 1, mid, ans = 0;
    while (l <= r) 
    {
        mid = l + (r - l) / 2;
        if (ok(mid)) 
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << ans << endl;
    return 0;
}
