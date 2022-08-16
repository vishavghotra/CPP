#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
ll a, b, c;
ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}
int main()
{

    ll n, k;
    cin >> n >> k;
    ll s = sum(k - 1);
    if (sum(k - 1) < (n - 1))
        cout << -1 << endl;
    else
    {
        ll l = 0;
        ll h = k - 1;
        ll mid = 1;
        while (l <= h)
        {
            mid = l + (h - l) / 2;
            if (s - sum(mid) >= n - 1)
                l = mid + 1;
            else
                h = mid - 1;
        }
        cout << k - 1 - h << endl;
    }
    return 0;
}
