#include <bits/stdc++.h>
#include <stdio.h>
#define ext long long
using namespace std;
int a, b, c;
int main()
{
    string s;
    ext nb, ns, nc, pb, ps, pc, r;
    cin >> s;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
            a++;
        else if (s[i] == 'S')
            b++;
        else
            c++;
    }
    ext l = 0;
    ext h = r + 100;
    ext z = 0;
    while (l <= h)
    {
        ext mid = l + (h - l) / 2;
        ext a1 = max(a * mid - nb, z);
        ext a2 = max(b * mid - ns, z);
        ext a3 = max(c * mid - nc, z);
        ext price = a1 * pb + a2 * ps + a3 * pc;
        if (price <= r)
            l = mid + 1;
        else
            h = mid - 1;
    }
    cout << h << endl;
}
