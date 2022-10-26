#include <bits/stdc++.h>
using namespace std;

int sieve(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{

    int n;
    cin >> n;
    sieve(n);
    if (sieve(n))
        cout << 1 << endl;
    else if (n % 2 == 0 || sieve(n - 2))
        cout << 2 << endl;
    else
        cout << 3 << endl;
}