#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
int a[1000005], cnt[32];
int main()
{
    ll n, k;
    cin >> n >> k;
    map<int, int> ans;
    queue<int> store;
    for (int i = 0; i < 32; i++)
    {
        if (n & (1 << i))
        {
            if (i > 0)
                store.push(1 << i);
            ans[1 << i]++;
        }
    }
    if (ans.size() > k)
    {
        cout << "NO" << endl;
        return 0;
    }
    int cnt = ans.size();
    while (cnt < k && store.empty() == false)
    {
        int z = store.front();
        store.pop();
        ans[z]--;
        ans[z / 2] += 2;
        if (z / 2 > 1)
        {
            store.push(z / 2);
            store.push(z / 2);
        }
        cnt++;
    }
    if (cnt < k)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for (auto x : ans)
        for (int i = 0; i < x.second; i++)
            printf("%d ", x.first);
}
