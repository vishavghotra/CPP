#include <bits/stdc++.h>
using namespace std;
#define frn(i, n) for (int i = 0; i < n; i++)

int a[100];
void solve()
{
    string s;
    cin >> s;
    int u = 22;
    int l = 7;
    string comp = "314159265358979323846264338327";
    int result = 0;
    frn(i, s.size())
    {
        if (s[i] == comp[i])
            result++;
        else
            break;
    }
    cout << result << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}