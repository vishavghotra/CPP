#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int m;
    cin >> n >> m;
    int length = n.length();
    while (m)
    {
        if (n[length - 1] == '0')
            length--;
        else
            n[length - 1] = n[length - 1] - '1' + '0';
        m--;
    }
    for (int i = 0; i < length; i++)
    {
        cout << n[i];
    }
}
