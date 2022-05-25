#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < t; i++)
    {
        cout << s[i] << "";
        i += cnt;
        cnt++;
    }
}
