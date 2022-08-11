#include <bits/stdc++.h>
using namespace std;
int n, a, b, c, j, k, l;
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> j >> k >> l;
        a += j;
        b += k;
        c += l;
    }

    cout << ((a | b | c) ? "NO" : "YES");
}
