#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int n, a, b;
int main()
{
    string s;
    cin >> s;
    if (s.size() % 2 == 0)
        cout << (s.size() / 2);
    else
    {
        int f = 0;
        for (int i = 1; i < s.size(); i++)
            if (s[i] == '1')
                f = 1;

        cout << ((s.size() / 2) + f);
    }
}
