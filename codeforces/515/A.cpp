#include <bits/stdc++.h>
#include <stdio.h>
#define ext long long
using namespace std;
int n, a, b;
int main()
{
    ext a, b, s;
    cin >> a >> b >> s;
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    if (a + b <= s && (s - a - b) % 2 == 0)
        cout << "Yes";
    else
        cout << "No";
}
