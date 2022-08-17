#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
int n;
int sx, sy, t, u, p;
char s[3000003];
int x[3000003], y[30000003];

int isok(int len)
{
    for (int i = 1; i + len - 1 <= n; i++)
    {
        sx = x[n] - x[i + len - 1] + x[i - 1];
        sy = y[n] - y[i + len - 1] + y[i - 1];
        p = abs(sx - t) + abs(sy - u);
        if (p <= len && (len - p) % 2 == 0)
            return 1;
    }

    return 0;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x[i] = x[i - 1];
        y[i] = y[i - 1];
        cin >> s[i];
        switch (s[i])
        {
        case 'U':
            y[i]++;
            break;
        case 'D':
            y[i]--;
            break;
        case 'L':
            x[i]--;
            break;
        case 'R':
            x[i]++;
            break;
        }
    }
    cin >> t >> u;
    int l = 0;
    int h = n;
    int ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (isok(mid))
        {
            h = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}
