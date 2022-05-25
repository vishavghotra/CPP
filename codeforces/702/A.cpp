#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[100000];
    int n;
    cin >> n;
    int max = 1;
    int cur = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0 && arr[i] > arr[i - 1])
            cur++;
        else
        {

            cur = 1;
        }
        max = (max > cur) ? max : cur;
    }
    cout << max << "\n";
}
