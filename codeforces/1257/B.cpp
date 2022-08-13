#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int n, a, b;
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (a < 2 && b > 1)
            cout << "NO\n";
        else if (a < 4 && b > 3)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
