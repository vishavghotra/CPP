#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> vector;
        int number;
        cin >> number;
        int m = 10;
        while (number)
        {
            if (number % m)
                vector.push_back(number % m);
            number = number - number % m;
            m = m * 10;
        }
        cout << vector.size() << "\n";
        for (int v : vector)
            cout << v << " ";
        cout << "\n";
    }
}