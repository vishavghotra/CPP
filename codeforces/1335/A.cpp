#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a < 3)
            cout << 0 << "\n";
        else if (a % 2 == 0)
            cout << a / 2 - 1 << "\n";
        else
            cout << a / 2 << "\n";
    }
}
