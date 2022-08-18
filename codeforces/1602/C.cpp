#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
int a[1000005], cnt[32];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= 30; i++)
            cnt[i] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            for (int j = 30; j >= 0; j--)
            {
                int x = ((a[i] >> j) & 1);
                cnt[j] += x;
            }
        }
        int gcd = 0;
        for (int i = 0; i <= 30; i++)
            gcd = __gcd(gcd, cnt[i]);
        for (int i = 1; i <= n; i++)
            if (gcd % i == 0)
                cout << i << " ";
        cout << endl;
    }
}
