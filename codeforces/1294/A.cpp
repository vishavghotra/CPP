#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int arr[3];
        int n;
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        sort(arr, arr + 3);
        if (n >= arr[2] - arr[0])
        {

            n -= (arr[2] - arr[0]);
            if (n >= arr[2] - arr[1])
            {

                n -= (arr[2] - arr[1]);
                if (n % 3 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
