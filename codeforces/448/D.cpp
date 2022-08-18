#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
ll n, m, k;
int main()
{
    cin >> n >> m >> k;
    ll l = 0;
    ll h = n * m;
    while (l <= h)
    {
        ll mid = l + (h - l) / 2;
        ll small = 0;
        for (int i = 1; i <= m; i++)
        {
            small += min(n, mid / i);
        }
        if (small < k)
            l = mid + 1;
        else
            h = mid - 1;
    }
    cout << l << endl;
}
