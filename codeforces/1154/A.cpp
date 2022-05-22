#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr, arr + 4);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[3] - arr[i] << " ";
    }
}
