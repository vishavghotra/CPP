#include <bits/stdc++.h>
using namespace std;
vector<string> split(string str)
{
    vector<string> a;
    string s = "";
    for (auto c : str)
    {
        if (c == '/')
        {
            a.push_back(s);
            s = "";
        }
        else
            s += c;
    }
    a.push_back(s);

    return a;
}
int main()
{
    vector<string> st;
    string op, s;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s == "pwd")
        {

            if (s.size() == 0)
                cout << "/\n";
            else
            {
                cout << "/";
                for (auto x : st)
                    cout << x << "/";
                cout << "\n";
            }
        }
        else
        {
            cin >> op;
            vector<string> ola = split(op);
            if (op[0] == '/')
                st.clear();
            for (auto x : ola)
            {
                if (x == ".." and st.size() > 0)
                    st.pop_back();
                else if (x != "")
                    st.push_back(x);
            }
        }
    }

    return 0;
}