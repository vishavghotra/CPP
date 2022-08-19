#include <bits/stdc++.h>
using namespace std;
int a[10000001];
int maxx, f;
int main()
{
    string s;
    cin >> s;
    stack<int> stack;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            stack.push(i);
        else
        {
            if (stack.empty() == false)
            {
                int m = i - stack.top() + 1 + a[stack.top() - 1];
                a[i] = m;
                //  cout << m << endl;
                stack.pop();
                if (maxx < m)
                {
                    maxx = m;
                    f = 1;
                }
                else if (maxx == m)
                {
                    f++;
                }
            }
        }
    }
    cout << maxx << " " << ((f) ? f : 1);
}