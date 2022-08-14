#include <bits/stdc++.h>
#include <stdio.h>
#define ext long long
using namespace std;
int main()
{
    int t, c;
    cin >> t;
    while (t--)
    {
        long int r, g, b, w, i = 2;
        cin >> r >> g >> b >> w;
        w = w % 2 + r % 2 + b % 2 + g % 2;
        cout << ((w < 2 || w == 4 || w == 3 && r * g * b) ? "YES\n" : "NO\n");
    }
    return 0;
}
