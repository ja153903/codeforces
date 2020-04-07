#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else if (a < b)
        {
            cout << b - a << endl;
        }
        else
        {
            cout << b - (a % b) << endl;
        }
    }

    return 0;
}
