#include <bits/stdc++.h>
#include <stdio.h>
#define ext long long
using namespace std;
ext t, x, y, a, b, c;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        x = pow(10, c - 1);
        while (x < pow(10, a - 1))
        {
            x *= 2;
        }
        y = pow(10, c - 1);
        while (y < pow(10, b - 1))
        {
            y *= 3;
        }
        cout << x << " " << y << endl;
    }
}
