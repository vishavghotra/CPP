#include <bits/stdc++.h>
using namespace std;
const int mxn = 509;
int a[mxn][mxn], n, m, k;
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            scanf("%d", &a[i][j]);
        k ^= a[i][1];
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (k ^ a[i][1] ^ a[i][j])
            {
                puts("TAK");
                for (int l = 1; l <= n; ++l)
                    printf("%d ", (l == i) ? j : 1);
                return 0;
            }
        }
    }
    return 0 * puts("NIE");
}
