#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
ll a, b, c;
int main()
{

    ll n, k;
    cin >> n >> k;

    ll min = LONG_LONG_MAX;

    ll a[n], b[n];
    for (ll i = 0;
         i < n; i++)
        cin >> a[i];
    for (ll i = 0;
         i < n; i++)
    {
        cin >> b[i];
        if (min > b[i])
            min = b[i];
    }

    ll l = 0;

    ll h = min + k;

    while (l <= h)
    {

        ll mid = l + (h - l) / 2;
        //  cout << mid << endl;
        ll p = 0;
        ll z = 0;
        for (ll i = 0;
             i < n; i++)
        {
            p += max(a[i] * mid - b[i], z);
        }
        // cout << p << endl;
        if (p <= k)
        {
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    cout << h << endl;
}
