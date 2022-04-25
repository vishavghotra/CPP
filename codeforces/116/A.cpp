#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int enter, out;
        cin >> out >> enter;
        sum = sum - out + enter;
        if (sum > max)
            max = sum;
    }
    cout << max << "\n";
}
