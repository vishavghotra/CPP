#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n, m, x;
    int h;
    while (t--)
    {
        priority_queue<pair<int, int>> queue;
        cin >> n >> m >> x;
        for (int i = 1; i <= m; i++)
        {
            queue.emplace(0, i);
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> h;
            auto xi = queue.top();
            queue.pop();
            cout << xi.second << ' ';
            xi.first -= h;
            queue.push(xi);
        }
    }
}
