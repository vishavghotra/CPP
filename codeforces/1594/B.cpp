#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
ll n, m, t;
ll mod = 1e9 + 7;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ll num = 0;
        ll mul = 1;
        while (m)
        {
            if (m & 1)
            {
                num += mul;
            }
            num = num % mod;
            mul *= n;
            mul = mul % mod;
            m = m >> 1;
        }
        cout << num << endl;
    }
}
