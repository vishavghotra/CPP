#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    ll n, h;
    while (t--)
    {
        cin >> n >> h;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n >= h)
            cout << 1 << endl;
        else if (n == 1)
            cout << h << endl;
        else
        {
            ll low = 0;
            ll high = h;
            while (low <= high)
            {
                ll mid = low + (high - low) / 2;
                ll diff = 0;
                for (int i = 0; i < n - 1; i++)
                {
                    diff += min(a[i + 1] - a[i], mid);
                }
                diff += mid;
                //  cout << diff << " " << low << high << endl;
                if (diff < h)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            cout << low << endl;
        }
    }
}
