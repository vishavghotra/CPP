#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;

int main()
{
    ll m;
    cin >> m;
    ll ans = -1;
    ll l = 0;
    ll h = 1e17;
    while (l <= h)
    {
        ll mid = l + (h - l) / 2;
        ll ways = 0;
        for (ll i = 2; i * i * i <= mid; i++)
        {
            ways += (mid / (i * i * i));
        }
        if (ways == m)
        {
            ans = mid;
        }
        if (ways >= m)
            h = mid - 1;
        else
            l = mid + 1;
    }
    cout << ans << endl;
}
