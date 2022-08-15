#include <bits/stdc++.h>
#include <stdio.h>
#define ext long long
using namespace std;
ext t, x, y, a, b;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> a >> b;
        ext p = (abs(x - y) * a + min(x, y) * b);
        ext q = (x + y) * a;
        cout << (min(p, q)) << endl;
    }
}
