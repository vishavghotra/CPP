#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    int sum = 0;
    int h = 1;
    for (h = 1;; h++)
    {
        sum += h;
        if (sum > t)
            break;
        else
            t -= sum;
    }
    cout << h - 1 << "\n";
}
