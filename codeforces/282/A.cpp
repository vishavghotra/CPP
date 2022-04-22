#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string exec;
        cin >> exec;
        if (exec.compare("X++") == 0 || exec.compare("++X") == 0)
            x++;
        else
            x--;
    }
    cout << x << endl;
}