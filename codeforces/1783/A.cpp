#include <bits/stdc++.h>
using namespace std;

int a[100];
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }
        if (a[0] == a[t - 1])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << a[t - 1];
            for (int i = 0; i < t - 1; i++)
                cout << " " << a[i];
            cout << endl;
        }
    }
}