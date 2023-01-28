#include <bits/stdc++.h>
using namespace std;
#define frn(i, n) for (int i = 0; i < n; i++)

int a[100];
void solve()
{
    int t;
    cin >> t;
    int even = t * t;
    int odd = 1;
    int turn = 0;
    vector<vector<int>> result(t, vector<int>(t));
    frn(i, t)
    {
        frn(j, t)
        {
            if (!(i % 2))
            {
                if (!turn)
                {
                    result[i][j] = even--;
                }
                else
                    result[i][j] = odd++;
                turn = ~turn;
            }
            else
            {
                if (!turn)
                {
                    result[i][t - 1 - j] = even--;
                }
                else
                    result[i][t - 1 - j] = odd++;
                turn = ~turn;
            }
        }
    }
    frn(i, t)
    {
        frn(j, t)
        {
            cout << result[i][j] << " \n"[j == t - 1];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}