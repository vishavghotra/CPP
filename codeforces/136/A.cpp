#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[101], b;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> b;
        a[b] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}
