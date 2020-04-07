#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int asp = 0;
    int ap = 0;

    int bsp = 0;
    int bp = 0;

    for (int i = 0; i < n; i++)
    {
        int t, x, y;
        cin >> t >> x >> y;

        if (t == 1)
        {
            asp += x;
            ap += 10;
        }
        else
        {
            bsp += x;
            bp += 10;
        }
    }

    if (ap > 0 && asp >= ap / 2)
    {
        cout << "LIVE\n";
    }
    else
    {
        cout << "DEAD\n";
    }

    if (bp > 0 && bsp >= bp / 2)
    {
        cout << "LIVE\n";
    }
    else
    {
        cout << "DEAD\n";
    }

    return 0;
}
