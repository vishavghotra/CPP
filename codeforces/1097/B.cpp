#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
int a[1000005], cnt[32];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= (1 << n) - 1; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                sum += a[j];
            else
                sum -= a[j];
            sum %= 360;
        }
        if (sum % 360 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
