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
        long long odd  = (n+1)/2;
         
        if(k<=odd) cout << (2*k-1) << endl;
        else
        {
            int plus = 2,div = 4;
            int group = 2;
            int cnt = odd;
            long long first_num = 2;
            while(true)
            {
                int num = (n+plus)/div+ cnt;
                if(k>num)
                {
                    plus*=2;
                    div*=2;
                    group++;
                    cnt = num;
                    first_num*=2;
                }
                else break;
            }
            k -= cnt;
            cout << first_num + (k - 1) * (first_num * 2) << endl;
        }
    }
    return 0;
}
