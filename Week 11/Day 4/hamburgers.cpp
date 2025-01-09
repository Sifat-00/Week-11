#include<bits/stdc++.h>
using namespace std;
int main()
{
    string dish;
    cin >> dish;
    long long amountB,amountS,amountC;
    cin >> amountB >> amountS >> amountC;
    long long costB,costS,costC;
    cin >> costB >> costS >> costC;
    long long money;
    cin >> money;

    long long cntb = 0,cnts = 0,cntc = 0;

    for(auto x : dish)
    {
        if(x=='B') cntb++;
        else if(x=='S') cnts++;
        else cntc++;
    }



    long long l = 1,r=1e12,ans = 0;

    while(l<=r)
    {
        long long mid = l + (r-l)/2;

        long long b = max(0LL, cntb * mid - amountB);
        long long c = max(0LL, cntc * mid - amountC);
        long long s = max(0LL, cnts * mid - amountS);



        long long taka = (b*costB) + ( c * costC) + (s*costS);

        if(taka<=money)
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
         
    }
    cout << ans << endl;
    return 0;
}