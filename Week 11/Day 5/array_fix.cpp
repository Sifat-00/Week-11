

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        if(is_sorted(ar.begin(), ar.end())) 
        {
            cout << "YES" << endl;
            continue;
        }

        vector<int> v;
        bool flag = true;
        int idx = -1;
        for(int i=n-1;i>=1;i--)
        {
            if(ar[i] < ar[i-1]) 
            {
                idx = i-1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i>idx) v.push_back(ar[i]);
            else
            {
               if(ar[i] >= 10) 
                {
                    int a = ar[i] / 10;
                    int b = ar[i] % 10;
                    v.push_back(b);
                    v.push_back(a);
                }
                else 
                {
                    v.push_back(ar[i]);
                }
            }
        }
        if(is_sorted(v.rbegin(), v.rend())) 
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
