#include <bits/stdc++.h>
using namespace std;
const int mxn = 509;
int a[mxn][mxn], n, m, k;
int main()
{
    stack<char> queue;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {

        if (!queue.empty() && queue.top() == s[i])
        {
            // cout << queue.front() << " " << s[i] << " " << i << endl;
            queue.pop();
        }
        else
        {
            queue.push(s[i]);
            // cout << queue.size() << endl;
        }
    }
    // cout << queue.size() << endl;
    if (queue.size() % 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (queue.empty() == false)
    {
        char t = queue.top();
        queue.pop();
        char n = queue.top();
        queue.pop();
        if (t != n)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
