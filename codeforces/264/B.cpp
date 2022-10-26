#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int dp[100001] = {0};
    int d[100001] = {0};
    int ans = 0;

    while (t--)
    {
        int a;
        cin >> a;
        dp[a] = d[a] = 1;
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                dp[a] = max(dp[a], d[i] + 1);
                dp[a] = max(dp[a], d[a / i] + 1);
            }
        }
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                d[i] = dp[a];
                d[a / i] = dp[a];
            }
        }
        ans = max(ans, dp[a]);
    }
    cout << ans << endl;
}