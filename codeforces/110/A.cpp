#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int result = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
            result++;
    }
    if (!result)
    {
        cout << "NO"
             << "\n";
        return 0;
    }
    while (result)
    {
        if (result % 10 != 4 && result % 10 != 7)
        {
            cout << "NO"
                 << "\n";
            return 0;
        }
        else
            result = result / 10;
    }
    cout << "YES"
         << "\n";
}
