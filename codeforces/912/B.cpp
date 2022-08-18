#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
ll n, m, k;
int main()
{
    cin >> n >> k;
    if (k == 1)
        cout << n << endl;
    else
        cout << (1ll << ((int)log2l(n) + 1)) - 1 << endl;
}
