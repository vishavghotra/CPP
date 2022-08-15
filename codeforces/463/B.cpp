#include <bits/stdc++.h>
#include <stdio.h>
#define ext long long
using namespace std;
ext t, x, y, a, b, c;
int main()
{
    cin >> t;
    y = 0;
    a = 0;
    b = 0;
    while (t--)
    {
        cin >> c;
        x = c - y;
        if (x > 0)
        {
            if (a >= x)
            {
                a -= x;
            }
            else
            {
                b += x - a;
                a = 0;
            }
        }
        else
        {
            a = a - x;
        }
        y = c;
    }
    cout << b << endl;
}
