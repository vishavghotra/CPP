#include <bits/stdc++.h>
using namespace std;
int t, a, b, c, d;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        (b < 2 * a) ? (cout << -1 << " " << -1 << "\n") : (cout << a << " " << 2 * a << "\n");
    }
}
