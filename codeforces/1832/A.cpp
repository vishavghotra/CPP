#include <bits/stdc++.h>
using namespace std;
#define fr(n) for (int i = 0; i < n; i++)

int a[100];
void solve()
{
    string s;
    cin >> s;
        int r = s.size();
        if(r != 1) {
        fr(r/2 - 1) {
            if(s[i] != s[i + 1]) {
                cout << "yes" << endl;
                return;
            }
        }
        cout << "no" << endl;
    }
}
int main()
{
ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}