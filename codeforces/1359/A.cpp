#include <bits/stdc++.h>
#include <stdio.h>
#define ext long long
using namespace std;
int t, n, m, k;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        if (m == 0)
            cout << 0 << endl;
        else if (m == 1)
            cout << 1 << endl;
        else
        {
            if (m <= (n / k))
                cout << m << endl;
            else
                cout << ((n / k) - ((m - (n / k) + k - 2) / (k - 1))) << endl;
        }
    }
}
