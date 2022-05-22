#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    set<char> set;
    while (cin >> s)
        set.insert(s);
    if (set.size() & 1)
        cout << "IGNORE HIM!\n";
    else
        cout << "CHAT WITH HER!\n";
}
