#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        if (n == 1)
            cout << 0 << "\n";
        else if (n == 2)
            cout << s << "\n";
        else
            cout << 2 * s << "\n";
    }
}
