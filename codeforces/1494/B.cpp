#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
int a[1000005], cnt[32];
int n, u, r, d, l;
int main()
{
    ll t;
    cin >> t;
    int corners;
    while (t--)
    {
        cin >> n >> u >> r >> d >> l;
        int i;
        for (i = 0; i < (1 << 4); i++)
        {
            if (((i & 2) ? 1 : 0) + ((i & (1)) ? 1
                                               : 0) >
                    l ||
                ((((i & 2) ? 1 : 0) + ((i & 1) ? 1
                                               : 0)) +
                     (n - 2) <
                 l))
            {
                // cout << "a" << endl;
                continue;
            }
            if (((i & 2) ? 1 : 0) + ((i & (4)) ? 1
                                               : 0) >
                    d ||
                (((i & 2) ? 1 : 0) + ((i & 4) ? 1 : 0) + (n - 2) < d))
            {
                //   cout << "b" << endl;
                continue;
            }
            if (((i & 4) ? 1 : 0) + ((i & (8)) ? 1
                                               : 0) >
                    r ||
                (((i & 4) ? 1 : 0) + ((i & 8) ? 1 : 0) + (n - 2) < r))
            {
                // cout << "c" << endl;
                continue;
            }
            if (((i & 1) ? 1 : 0) + ((i & (8)) ? 1
                                               : 0) >
                    u ||
                (((i & 1) ? 1 : 0) + ((i & 8) ? 1 : 0) + (n - 2) < u))
            {
                // cout << "d" << endl;
                continue;
            }
            break;
        }
        if (i == (1 << 4))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
