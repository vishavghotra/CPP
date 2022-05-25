#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int sum = 0;
        int one = 0;
        int cur = 0;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == '1')
            {
                sum += cur;
                cur = 0;
                one = 1;
            }
            else if (one)
                cur++;
        }
        cout << sum << "\n";
    }
}
