#include <iostream>
using namespace std;
int main()
{
    int weight = 0;
    cin >> weight;
    if (weight % 2 == 0 && weight != 2)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}