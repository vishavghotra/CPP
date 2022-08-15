#include <bits/stdc++.h>
#include <stdio.h>
#define ext long long
using namespace std;
int main()
{
    string p, q, a, b;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        p = a;
        q = b;
        while (1)
        {
            if (p.length() == q.length())
            {
                if (p == q)
                    cout << q << endl;
                else
                    cout << -1 << endl;
                break;
            }
            else if (p.length() > q.length())
                q += b;
            else
                p += a;
        }
    }
}
