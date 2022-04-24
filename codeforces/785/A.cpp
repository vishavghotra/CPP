#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        string shape;
        cin >> shape;
        if (shape[0] == 'T')
            result += 4;
        else if (shape[0] == 'I')
            result += 20;
        else if (shape[0] == 'C')
            result += 6;
        else if (shape[0] == 'D')
            result += 12;
        else
            result += 8;
    }
    cout << result << "\n";
}
