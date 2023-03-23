#include <bits/stdc++.h>
using namespace std;
#define frn(i, n) for (int i = 0; i < n; i++)

int a[100];
void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (y1 > y2)
        cout << -1 << endl;
    else
    {
        int r = y2 - y1;
        x1 = x1 + r;
        if(x2 > x1) cout << -1 << endl;
        else
        cout <<  x1 - x2 + r << endl;
    } 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}