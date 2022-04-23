#include <iostream>

using namespace std;
int main()
{
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {

        if (n[i] >= '5')
            n[i] = '9' - n[i] + '0';
    }
    if (n[0] == '0')
        n[0] = '9';
    cout << n << endl;
}