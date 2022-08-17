#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0;
    ll h = m;
    ll mid;
    while (l <= h)
    {
        ll mid = l + (h - l) / 2;
        ll last = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            if (a[i] > last)
            {
                if (a[i] + mid - m >= last)
                {
                }
                else
                    last = a[i]; // no operation done.
            }
            else if (a[i] < last)
            {
                if (last - a[i] > mid)
                    break;
            }
        }
        if (i == n)
            h = mid - 1;
        else
            l = mid + 1;
    }
    cout << l << endl;
}
