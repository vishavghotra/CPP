#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        cout << (m / 2) * n + (m % 2) * ((n + 1) / 2) << "\n";
    }
}
