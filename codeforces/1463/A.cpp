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
        cin >> x >> y >> a;
        ext b = (x + y + a);
        if (((b) % 9 == 0) && x >= b / 9 && y >= b / 9 && a >= b / 9)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
